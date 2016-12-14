/* simple-server.c
 *
 * Copyright (c) 2000 Sean Walton and Macmillan Publishers.  Use may be in
 * whole or in part in accordance to the General Public License (GPL).
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
*/

/*****************************************************************************/
/*** simple-server.c                                                       ***/
/***                                                                       ***/
/*****************************************************************************/

/**************************************************************************
*	This is a simple echo server.  This demonstrates the steps to set up
*	a streaming server.
**************************************************************************/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>

#define MY_PORT		9999
#define MAXBUF		100

int main(int Count, char *Strings[])
{   int sockfd;
    ssize_t n;
    ssize_t leen;
    //char recvBuff[1024];
    //char buff2[MAXBUF];
	struct sockaddr_in self;
	char buffer[MAXBUF];
	char buff2[MAXBUF];

	int ii = 0;

	for(ii; ii<100; ii++){

        buff2[ii] = 0;
	}


	/*---Create streaming socket---*/
    if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0 )
	{
		perror("Socket");
		exit(errno);
	}

	printf("Create Socket on FD: %d\n\n", sockfd);

	/*---Initialize address/port structure---*/
	bzero(&self, sizeof(self));
	self.sin_family = AF_INET;
	self.sin_port = htons(MY_PORT);
	self.sin_addr.s_addr = INADDR_ANY;

	/*---Assign a port number to the socket---*/
    if ( bind(sockfd, (struct sockaddr*)&self, sizeof(self)) != 0 )
	{
		perror("socket--bind");
		exit(errno);
	}

	/*---Make it a "listening socket"---*/
	if ( listen(sockfd, 20) != 0 )
	{
		perror("socket--listen");
		exit(errno);
	}


    leen = 0;

	/*---Forever... ---*/
	while (1)
	{	int clientfd;
		struct sockaddr_in client_addr;
		int addrlen=sizeof(client_addr);

		/*---accept a connection (creating a data pipe)---*/
		clientfd = accept(sockfd, (struct sockaddr*)&client_addr, &addrlen);
		printf("%s:%d connected\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));
		printf("\n\nCreated COMMUNICATION Socket on FD: %d\n\n", sockfd);

		//write muss auf dem Communication-Filedescriptor schreiben
        write(clientfd, "Welcome to Server3000\n", sizeof("Welcome to Server3000"));
        //recvBuff[n] = 0;


        //char * message1 = "Bitte geben Sie etwas ein";
        write(clientfd, "\n\nBitte geben Sie etwas ein\n\n", sizeof("\n\nBitte geben Sie etwas ein\n\n")); //muss & sein, sonst wird der String abgeschnitten

        //char buff2[MAXBUF];

        leen = NULL;
        leen = read(clientfd, buff2, 10); //Read stoppt und wartet auf INput hier hoert er auf weiter zu gehen

        printf("\n\nDie Eingabe vom Client war: %s\n\n", buff2);

        //char *abbr = "q";
        if(buff2[0] == '1'){

            write(clientfd, "\nQuit wurde gewaehlt\n", 100);
            close(clientfd);
            exit(1);
        } else {

            write(clientfd, "\nQuit wurde NICHT gewaehlt\n", 100);
        }

        for(ii = 0; ii < MAXBUF; ii++){
            if(buff2[ii] != "0" && buff2[ii] != NULL){
                printf("\nInhalt Buff2: %d = %c\n", ii+1, buff2[ii]);
            } else {
                break;
//                printf("\n\nErrors in IF\n\n");
            }

            //printf("OUT of IF");

        }

        for(ii = 0; ii < 16; ii++){
                printf("\nInhalt Buff2: %d = %c\n", ii+1, buff2[ii]);

            }

        printf("\n\nEs wurden sowiviele Bytes im Buffer buff2 gespeichert = %d\n\n", leen);

        write(clientfd, buff2, 5);

        //write(clientfd, leen, MAXBUF);

// -- SECOND READ FUNCTIOIN


        write(clientfd, "\n\nSecond-READ-Function\n\n", sizeof("\n\nOut-Of-While-Loop\n\n"));

        bzero(buffer,255);
        n = read(clientfd, buffer, 255);
        printf("\n\nRead n at the same time: %d\n\n", n);
        printf("\n\nDie Eingabe war: %s\n\n", buffer);
        if (n < 0) error("ERROR reading from socket");

		/*---Close data connection---*/
    close(clientfd);
	}

    //close(clientfd);
	/*---Clean up (should never get here!)---*/
	close(sockfd);
	return 0;
}

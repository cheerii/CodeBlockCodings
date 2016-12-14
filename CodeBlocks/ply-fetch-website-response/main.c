#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <sys/socket.h>
#include <resolv.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//#define extIP = "8.8.8.8"
#define PORT_HTTP 80
//#define REMOTE_SRV_ADDR "194.232.104.150"
#define REMOTE_SRV_ADDR "213.164.6.215"
int main()
{
    printf("Hello ClientSocket!\n");


    struct sockaddr_in local_addr;
    struct sockaddr_in remote_addr;
    int srv, cli, n, connreturn;
    int sockfd, connsock;
//    char *srvip = "194.232.104.150";
    char * httpget = "GET / HTTP/1.1\r\nHost: 213.164.6.215 \r\nConnection: close\r\n\r\n" ;
    //char* httpget = "POST / HTTP/1.1\r\n"
//                      "Host: " HOST "\r\n"
//                      "Authorization: Basic " APIKEY "\r\n"
//                      "Connection: close\r\n"
//                      "\r\n";


    //char *url= "GET / HTTP/1.1\r\nHost: " + url + "\r\nConnection: close\r\n\r\n";

    char *recv_puffer;
    recv_puffer = malloc(20000);

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    remote_addr.sin_family = AF_INET;
    remote_addr.sin_port = htons(PORT_HTTP);
    remote_addr.sin_addr.s_addr = inet_addr(REMOTE_SRV_ADDR);

    printf("ah eh, SOCK-FD is : %d\n\n", sockfd);

    if (sockfd == -1)
        perror("ah eh, Could not create SOCKET\n\n");

    int remotelen = sizeof(remote_addr);
    connreturn = connect(sockfd, (struct sockaddr *) &remote_addr, remotelen);

    //printf("ReturnValue of connect ist: %d\n\n", connreturn);

    if (connreturn == -1){
        perror("ah eh, CONNECT hot net klappt -> -1 \n\n");
    }
        else
     {
         printf("Connection was successfully opened\n\n");
     }


    int sendvar;
    sendvar = send(sockfd, httpget, strlen(httpget), 0);

    recv(sockfd, recv_puffer, 2000, 0);
    printf("%s\n", recv_puffer);

    return 0;

}

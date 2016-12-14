#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

//C:/Users/dabu/Google Drive/len-t530/_playground/Proggen/Code-Blocks/systemproggen1/file1.txt

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc,char *aa[]){
    int fd,fd1;
    char buffer[100];

    //fd=open(aa[1],O_RDONLY,S_IRUSR);
    fd=open("/home/db/Documents/_playground_albert_debian_t460p/Code-Blocks/file-trash/file1.txt",O_RDONLY,S_IRUSR);
    if(fd==-1){
        printf("file not found.\n");
        return -1;
    }
    fd1=open("/home/db/Documents/_playground_albert_debian_t460p/Code-Blocks/file-trash/fileoutp.txt", O_WRONLY,S_IRUSR);
    if(fd1!=-1){
        printf("file is created.\n");
    }
    ssize_t n;
    while((n=read(fd,buffer,5)) > 0){ //gleichzusetzen mit while(n=read(fd,buffer,5)
            printf("\n\nbytes read by READ n at the same time: %d\n\n", n);
        write(fd1,buffer,n);
        printf("..writing..\n");
    }

    n=read(fd,buffer,5);
    printf("\n\nbytes read by READ n at the same time: %d\n\n", n);

    close(fd);
    close(fd1);
}

#include <stdlib.h>
#include <stdio.h>

int main(){
 char* hostname = (char*)calloc(10, sizeof(hostname));
 hostname = "unchanged";
 printf("Hostname in MAIN before function: %s\n", hostname);
 printf("Address of hostname = %d\n", &hostname);
 someFunction(&hostname);
 printf("Hostname: %s\n", hostname);
 return 0;
}


someFunction(char* s){

   printf("s = %d\n", s);
   printf("Address of s = %d\n", &s);
   printf("*(&s) = %d\n", *(&s));
   *s = "changed";

}

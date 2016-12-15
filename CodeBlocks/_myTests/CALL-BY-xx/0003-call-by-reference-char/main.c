#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */



int main(){
 char* hostname = (char*)calloc(10, sizeof(hostname));
 hostname = "unchanged";
 printf("Hostname: %s\n", hostname);
 someFunction(hostname);
 printf("Hostname: %s\n", hostname);
 return 0;
}


someFunction(char* s){

   int retval;
   printf("func: s = %d\n", s);
   printf("func: *s = %c\n", *s); //prints "u"


   printf("\nCreate String-Point with WHILE\n");
   while(*s != '\0'){
         printf("%c", *s);
         *(s++);
   }

   printf("\n\n");
   printf("Address of s = %d\n", &s);
   printf("*(&s) = %d\n", *(&s));
   printf("*(&s) oder einfach nur (s) = %d\n", s);
   *s = "changed";

int retval = (strncmp(s, "changed", 1000))
printf("retval %d", retval);

   if(strcmp((*s), "changed")){
         printf("wuhuuu\n");

   } else {
         printf("not wuhuu\n");
   }

}

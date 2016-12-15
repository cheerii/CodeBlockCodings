#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \WORKING
 * \
 * \return
 *
 */


int main()
{
    printf("Hello world!\n");

    char *pointer = "Sunday";

    while(*pointer != '\0'){

         printf("%c", *pointer);
         *(pointer++);

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \
 * \ CALL BY REFERENCE
 * \ ARRAYs
 * \
 *
 */


int callbyreference(char *name2)
{

    printf("\n\ncallbyreference:: Die Adresse von name ist %d\n\n", name2);
    strcpy(name2, "changed"); //Important to use strcpy

}


int main(int argc, char **argv)
{

   char name[32] = "ich bin ein test";

    printf("\n\nmain callbyreference:: Die Adresse von name ist %d\n\n", name);
    printf("\n\nmain char name VOR callbyreference:: %s\n\n", name);

    callbyreference(name);

    printf("\n\nmain char name NACH callbyreference:: %s\n\n", name);

    *name = "changeNEW";
    printf("\n\nmain char name :: %s\n\n", name);

    strcpy(name, "changeinMain");
    printf("\n\nmain char name :: %s\n\n", name);

   return 0;
}

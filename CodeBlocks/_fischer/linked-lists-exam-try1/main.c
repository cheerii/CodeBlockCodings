#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \
 * \ CALL BY REFERENCE
 * \ ARRAYs
 *
 */


int callbyreference(char *name2)
{

    printf("\n\ncallbyreference:: Die Adresse von name ist %d\n\n", name2);

    *name2 = "\n\nneuer Text von der Funktion\n\n";

}


int main(int argc, char **argv)
{
   char name[32] = "ich bin ein test";
   unsigned age = "999";

    printf("\n\nmain callbyreference:: Die Adresse von name ist %d\n\n", name);

    printf("\n\nchar name VOR der Funktion: %s\n\n", *name);

    callbyreference(name);

    printf("\n\nchar name NACH der Funktion: %s\n\n", *name);

   return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \
 * \ Arrays and Char Pointers as call-by-reference
 * \ it is not possible to do call-by-value, because the name holds the first character of the array and so StringA and StringB are just pointers, pointing to the first character of the string and
 * \ thus are just pointers
 */


void manipulateStrings(char *string1, char *string2[])
{

    strcpy (string1, "Apple");
    strcpy (string2, "Banana");

    printf ("2 string1: %s\n\n", string1);
    printf ("2 string2: %s\n\n", string2);

}


int main ()
{
    char *stringA;
    char stringB[1024];

    stringA = (char *) malloc ( 1024 + 1 );

    strcpy (stringA, "Alpha");
    strcpy (stringB, "Bravo");
    printf ("1 stringA: %s\n\n", stringA);
    printf ("1 stringB: %s\n\n", stringB);

    manipulateStrings(stringA, stringB);

    printf ("3 stringA: %s\n\n", stringA);
    printf ("3 stringB: %s\n\n", stringB);


    return 0;
}

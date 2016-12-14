#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ARRAY TESTS!\n");

    int elem[5] = {100, 200, 300, 400, 500};
    int *pElem;

    printf("die Adresse vom &elem START-Array ist: %d\n\n", &elem);
    printf("die Adresse vom elem Array ist: %d\n\n", elem);

    printf("Das erste Element aus array (ohne pointer) %d\n\n", elem[0]); //ergibt das erste element 100
    printf("Das erste Element aus array (ohne pointer) %d\n\n", elem[0]+1); //ergibt 101

    printf("Das zweite Element aus array (ohne pointer) %d\n\n", elem[0+1]);
    printf("Das zweite Element SPEICHERADDR aus array (ohne pointer) %d\n\n", &elem[0+1]);


    pElem = elem;
    printf("die Adresse vom START-Array-Pointer pElem ist: %d\n\n", pElem);
    printf("Das erste Element aus array mit pointer %d\n\n", *pElem);
    printf("Das erste Element aus array mit pointer %d\n\n", *pElem+1);

    printf("Das zweite Element aus array mit pointer %d\n\n", *(pElem +1));
    printf("Das zweite Element SPEICHERADDR aus array mit pointer %d\n\n", (pElem +1));



    return 0;
}

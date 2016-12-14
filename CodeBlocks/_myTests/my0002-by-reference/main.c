#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * Testing
 * Functions CALL-BY-REFERENCE
 *
 *
 */


void testing(char *s){ //CALL-BY-REFERENCE with CHAR

    printf("function:: string in: %d\n\n", s); //muss ein %d sein, da die Speicheradresse nun uebermittelt wird
//    *s = "wurde in der funktion geaendert"; //FEHLER !!!! zu lange zeichenkette??????
//    *s = "changed changed change c" //GUELTIG - UNGUELTIG ist: "changed changed change change", es ist nur moeglich zwischen den zeichen etwas einzufuegen, jedoch nicht aber am ende, dann laesst es sich verandern
    *s = "changed"; //bis zu dieser zeichenkette gibt es keine probleme, eines mehr ergibt fehler
    printf("function:: s in: %d\n\n", s);

}


void testINT(int *age){ //CALL-BY-REFERENCE with INTeger



}

int main()
{
    printf("Hello world!\n");

    char *stringg; // = (char*)calloc(30, sizeof(stringg));
    stringg = "unchanged";
    printf("main:: char string before FUNCTION %s\n\n", stringg);
    testing(&stringg); //passing by-reference

    printf("main:: stringg after FUNCTION %s\n\n", stringg);

    return 0;
}

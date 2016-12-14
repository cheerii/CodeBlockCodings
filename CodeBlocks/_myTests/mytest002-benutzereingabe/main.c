#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \
 * \ Benutzereingabe eines User mit Auswahl
 * \ Anfoderungen: Bei Eingabe der Taste "Enter" wird wieder zur Eingabe gesprungen
 *
 */


int main()
{
    printf("Hello LOOPs!\n");

    char i_input;

    while(1){

        printf("Hier koennen Sie Ihre Eingabe starten\n \
               q fuer Quit \n \
               a erneut die Auswahlen anzeigen lassen\n\n");

        do {

            printf("\n### in Do-Loop ### \n\n: ");
            printf("Ihre Eingabe: ");
            scanf("%c", &i_input);

        } while(i_input == '\n' || i_input == NULL || i_input == ' ');

        printf("\n#### OUT-Of Do-Loop ### \n\n: ");

//        if(i_input == " "){
//            printf("Ihre Eingabe war leer\n\n");
//            printf("Ihre Eingabe: ");
//            scanf("%d", &i_input);
//        }

        switch(i_input){

            case 'q':
            printf("Sie haben q gewaehlt, das Programm wird nun beendet\n\n");
            exit(1);

            case 'a':

            printf("Es wurde NICHT Quit gewaehlt\n\n");
            continue;

            default:

            printf("Sie haben eine ungueltige Taste gedrueckt\n\n");
            continue;

        }



    }

    return 0;

}

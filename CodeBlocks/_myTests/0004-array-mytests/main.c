#include <stdio.h>

/** \brief
 *
 * \
 * \Zeiger als Rückgabewert einer Funktion
 * \pointer as return value
 *
 */


char* first_occurance (char *string, char ch);

int main ()
{

  char string[]={"Hallo\0"}, ch = 'a';
  char *first;

  first = first_occurance (string, ch);

  printf ("\n\n");

  if (first != NULL)
    printf ("%c\n\n", *first);

    else
      printf ("Zeichen nicht vorhanden\n\n");

  return 0;

}


char* first_occurance (char *string, char ch)      // Rückgabetyp ist ein Pointer vom Typ char, deshalb char*
{

         //printf("*string %s\n", *string);
         printf("string %s\n", string);
         //printf("ch %s\n", ch);
         //printf("ch %s\n", *ch);

  char *p;

  while (*string != '\0')                          // sucht bis zum Ende des Strings
  {

    if (*string == ch)                             // Zeichen gefunden
    {

      p = string;                                  // p zeigt auf das Zeichen und wird zurückgegeben
      return p;

    }

    string++;                                      // nächstes Zeichen wird überprüft

  }

  return 0;                                        // Zeichen nicht gefunden

}

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


 typedef struct persondb{
	char name[32]; 		//Array mit namen
 } persondb_t;

int add_m(char *name)
{

//    printf("\n\nadd_m:: Die Adresse von name ist %d\n\n", name);
//    printf("\n\nadd_m:: Die Adresse von &name ist %d\n\n", &name);
    printf("\n\nadd_m:: Der Name ist %s\n\n", name);
//    strcpy(name, "DOMIIII"); //Important to use strcpy
//    strcpy(name,"t");
//    strncpy(name, name, name[31]);
    return 0;

}

void print_m(char *name){

    printf("\n\nprint_m:: Die Adresse von name ist %d\n\n", name);
    printf("print_m:: %s\n", name);

}


int main(int argc, char **argv)
{
    persondb_t pdb;
   char name[32];

    printf("\n\nmain pdb->name:: Die Adresse ist %d\n\n", pdb.name);
    printf("\n\nmain name[32]:: Die Adresse ist %d\n\n", name);
//    printf("\n\nmain char name VOR callbyreference:: %s\n\n", name);

    add_m("d");
//    add_m(name);
    printf("\n\nmain char name NACH function\n\n");
    printf("\n\nmain char name NACH function:: %s\n\n", name);

//    printf("\n\nmain char name NACH callbyreference:: %s\n\n", name);

    print_m(name);

   return 0;
}

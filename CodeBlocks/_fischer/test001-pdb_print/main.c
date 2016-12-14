#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct persondb
{
    char name[32];
    unsigned age;
    struct persondb *next;

} persondb_t;


void pdb_init(persondb_t *pdb)
{

    pdb->age=NULL;
    pdb->name[32]=NULL;
    pdb->next=NULL;

}


int pdb_add_person(persondb_t *pdb, const char *name, unsigned age)
{

    printf("\n\npdb_add:: die Adresse vom Parameter *Name ist: %d\n\n", name);
    printf("\n\npdb_add:: Der Uebergebene Name ist: %s und Alter: %d\n\n", name, age);
    printf("\n\npdb_add:Address of array NAME = %d\n\n", &name);

    strcpy( pdb->name, name);
    pdb->age = age;


}



void pdb_print_person(const char *name, unsigned age)
{
    printf("in func pdb_print:: %s, %d\n", name, age);
}




int main(int argc, char **argv)
{
   persondb_t pdb;
   char name[32] = "ich bin ein test local variable";
   unsigned age = 999;

   printf("\n\nmain:: die Adresse von char name[32] ist: %d\n\n", name);

   printf("\n\npdb_add:Address of array NAME = %d\n\n", &name);
   printf("Vor pdb_init(&pdb): %s, Alter: %d\n\n ", pdb.name, pdb.age); //Check Value from Struct pdb before initialisation by NULL

   pdb_init(&pdb);

    printf("after pdb_init(&pdb): %s, Alter: %d\n\n ", pdb.name, pdb.age); //Check Value from Struct pdb

   pdb_add_person(&pdb, "Rasten Hound", 10);
                                                    printf("main vaulues in struct:: after first ADD: name: %s, pdb.age: %d\n\n ", pdb.name, pdb.age);
                                                    printf("main vaulues local:: after first ADD: Name: %s, Alter: %d\n\n ", name, age);
   pdb_print_person(name, age); //"name" braucht hier kein "&" bei der Parameter-Uebergabe, da es ein ARRAY ist!!!

//   pdb_free_all(&pdb);4

   return 0;
}

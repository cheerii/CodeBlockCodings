#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \
 * \ title: 0004-test-implement-add-function-dynamic-fischer
 * \ static implementation of linked list
 * \
 * \
 * \
 *
 */

typedef struct persondb
{

    char name[32];
    unsigned age;
    struct persondb *next;


}persondb_t;


void pdb_init(persondb_t *pdb)
{

    strcpy(pdb->name, "default");
    pdb->age = 0;
    pdb->next = NULL;

}


int pdb_add_person(persondb_t *pdb, const char *name, unsigned age)
{

    printf("\n\n#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&#+$%&\n\n");

    printf("\n\nEntering add-function:\n\n");
    int count = 0;


    struct persondb *tmpN = (struct persondb_t *) malloc(sizeof(persondb_t));

    strcpy(tmpN->name, name);
    tmpN->age = age;
    tmpN->next = NULL;

//    printf("\n\nadd:: pdb->name: %s\n\n", pdb->name);
    printf("\n\n---add:: tmpN->name: %s\n\n", tmpN->name);
//    printf("\n\nadd:: aktuell erzeugte Adresse von tmpN-Objekt ist: %d\n\n", tmpN);
//    printf("\n\nadd:: tmpN->next ist: %d\n\n", tmpN->next);
//    printf("\n\nadd:: pdb->next ist: %d\n\n", pdb->next);

//    printf("\n\nadd:: tmpN Objekt: Name ist: %s  Next ist: %d\n\n", tmpN->name, tmpN->next);

//    if (pdb->next == NULL){
//
//        //pdb->next=tmpN;
//    } else {
//
//        //WHILE
//
//        tmpN = pdb;
//
//        while (tmpN->next != NULL || tmpN->next!= 0 ){
//
//
//            tmpN = tmpN->next;
//            printf("---WHILE add:: Name ist %s", tmpN->name);
//
//        }
//
//
//        printf("");
//
//    }


    if (pdb->next == NULL){

        pdb->next=tmpN;
    } else {
        tmpN = pdb;

        while (tmpN != NULL){


            tmpN = tmpN->next;
            printf("---WHILE add:: Name ist %s\n\n", tmpN->name);
            printf("---WHILE add:: Next ist %s\n\n", tmpN->next);

        }}


//    printf("\n\nadd:: pdb->next ist: %d\n\n", pdb->next);
//    printf("\n\nadd:: tmpN->next ist: %d\n\n", tmpN->next);

}


int pdb_youngest_person(persondb_t *pdb, char *name, unsigned *age)
{

        printf("youngest:: Erstes erstelltes Struct-objekt pdb->next->name = Name %s \n\n", pdb->next->name);
        //printf("youngest:: Erstes erstelltes Struct-objekt pdb->next->next->name = Name %s \n\n", pdb->next->next->name);

}


void pdb_free_all(persondb_t *pdb)
{
}


void pdb_print_person(const char *name, unsigned age)
{
    printf("%s, %d\n", name, age);

}


int main(int argc, char **argv)
{


    persondb_t pdb;


//    printf("Struct size persondb_t = %d\n\n", sizeof(persondb_t));
//    printf("Struct size pdb = %d\n\n", sizeof(pdb));

    //pdb_init(&pdb);

   char name[32];
   unsigned age;

   printf("\n\nmain:: pdb.next ist: %d\n\n", pdb.next);

   pdb_init(&pdb);

   printf("\n\nmain:: pdb.next ist: %d\n\n", pdb.next);

   pdb_add_person(&pdb, "Rasten Hound", 10);
   pdb_add_person(&pdb, "Lisa Liquid", 23);
   pdb_add_person(&pdb, "NNNNN", 23);



   pdb_youngest_person(&pdb, name, &age);

//   printf("\n\nmain:: Erstes erstelltes Struct-objekt = Name %s \n\n", pdb.next->age);
//   printf("main:: Erstes erstelltes Struct-objekt pdb->next->next->name = Name %s \n\n", pdb.next->next->name);

//   pdb_add_person(&pdb, "Jenny Penny", 39);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_print_person(name, age);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_print_person(name, age);
//   pdb_add_person(&pdb, "Ron River", 27);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_print_person(name, age);
//   pdb_free_all(&pdb);

   return 0;
}

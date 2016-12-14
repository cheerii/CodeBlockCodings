#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief
 *
 * \
 * \ my test
 * \ see how local variable will change
 *
 */



typedef struct persondb{
	char name[32]; 		//Array mit namen
	int age; 					//Personen Alter
	struct persondb* first; 	//Erstes Element
	int counter; 			//Counter wie viele in der Datanbak sind
	struct persondb* next; 	//Next element
} persondb_t;


void pdb_init(persondb_t *pdb)
{

	if(pdb == NULL){
		printf("Leider war ein Fehler bei INIT\n");
		exit(1);
	}

	//alle angeleten elemente initialisieren
	bzero(pdb->name, 32); //setzte das ganze array auf \0 characters
	pdb->age = 0;
	pdb->first = NULL;
	pdb->next = NULL;
	pdb->counter = 0;
}


int pdb_add_person(persondb_t *pdb, const char *name, unsigned age)
{
    printf("-----add name:: Adresse ist %d\n\n", name);
    printf("-----uebergebenes &pdb name:: Adresse ist %d\n\n", &pdb);

    strcpy(pdb->name, "AAAAAAA");

//    struct persondb *temp = (struct persondb_t *)malloc(sizeof(persondb_t));
//
//    temp->age = age;
//    strncpy(pdb->name, name, 31);
//    temp->next=NULL;
//    pdb->next = temp;
//
//    printf("Diese Werte wurden definiert age, name, temp, address-in-struct  bfor: %d, %s, %d, %d\n\n", pdb->next->age, pdb->next->name, temp, pdb->next);

    if(pdb == NULL || name == NULL){
		printf("Leider war bei ADD_Person ein Fehler!\n");
		return -1;
	}

	if(pdb->first == NULL){
		pdb->first = malloc(sizeof(persondb_t));
		if(pdb->first == NULL){
			printf("Leider ging was beim MALLOC IN ADD_PERSON schief!\n");
			return -1; //return -1 da es eine int funktion ist
		}
		pdb->first->next = NULL;
		pdb->first->age = age;
		strncpy(pdb->first->name, name, 31);
		pdb->counter++;
		return pdb->counter;
	}else{

		persondb_t* newfirst = NULL;
		persondb_t* oldfirst = pdb->first;

		newfirst = malloc(sizeof(persondb_t));
		if(newfirst == NULL){
			printf("Leider ging was beim MALLOC IN ADD_PERSON schief!\n");
			return -1; //return -1 da es eine int funktion ist
		}
		newfirst->next = oldfirst;
		pdb->first = newfirst;
		pdb->first->age = age;
		printf("add name:: Adresse ist %d\n", name);
		strncpy(pdb->first->name, name, 31);
		pdb->counter++;
        printf("add pdb.name:: Adressen ist %d und age %d\n", pdb->name, &pdb->age);

		return pdb->counter;
	}


}


int pdb_youngest_person(persondb_t *pdb, char *name, unsigned *age)
{
}


void pdb_free_all(persondb_t *pdb)
{

    	if(pdb == NULL){
			fprintf(stderr, "ERROR 1: NULLPOINTER pdb in free\n");
			return;
		}

	persondb_t* freeelement = pdb->next;
	persondb_t* next;

	while (freeelement != NULL){
			next = freeelement->next;
			free(freeelement);
			freeelement = next;
		}
	pdb->counter = 0;
}


void pdb_print_person(const char *name, unsigned age)
{
    printf("%s, %d\n", name, age);
}


int main(int argc, char **argv)
{
   persondb_t pdb;
   char name[32];
   unsigned age;

            printf("---------nach &pdb----------------------------\n\n");
            printf("main - vor init &pdb - Adresse locales char name:: %d\n", name);
            printf("main - vor &pdb - Adresse pdb struct ist %d\n", &pdb);
            printf("main - vor &pdb - Adresse pdb.name ist %d\n", &pdb.name);
            printf("main - vor &pdb - Adresse pdb.age ist %d\n", &pdb.age);
   pdb_init(&pdb);


            printf("--------------vor ADD Person- &pdb, Rasten Hound, 10 ----------------------\n\n");
            printf("main Adresse pdb struct ist %d\n", &pdb);
            printf("main &pdb - pdb pdb.name, pdb.age:: Werte von name ist %s und age %d\n", pdb.name, pdb.age);
            printf("main pdb &pdb. &pdb:: Adresse sind %d und age %d\n", &pdb.name, &pdb.age);

   pdb_add_person(&pdb, "Rasten Hound", 10);
            printf("--------------nach ADD Person- &pdb, Rasten Hound, 10 ----------------------\n\n");
//   pdb_add_person(&pdb, "Lisa Liquid", 23);
//   pdb_add_person(&pdb, "Jenny Penny", 39);
            printf("main pdb:: ist %s und age %d\n", pdb.name, pdb.age);
            printf("main Name name:: %s\n", name);
           printf("main Adresse name:: %d\n", name);
           printf("main Adresse name:: %d\n", &name);
   pdb_print_person(name, age);
   printf("--------------nach print Person-- pdb_print_person(name, age);---------------------\n");
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_print_person(name, age);
//   pdb_add_person(&pdb, "Ron River", 27);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_youngest_person(&pdb, name, &age);
//   pdb_print_person(name, age);
   //pdb_free_all(&pdb);

   return 0;
}

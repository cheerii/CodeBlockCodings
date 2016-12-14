#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**

DO NOT CHANGE, its a Template

**/


typedef struct persondb
{
} persondb_t;


void pdb_init(persondb_t *pdb)
{
}


int pdb_add_person(persondb_t *pdb, const char *name, unsigned age)
{
}


int pdb_youngest_person(persondb_t *pdb, char *name, unsigned *age)
{
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
   char name[32];
   unsigned age;

   pdb_init(&pdb);
   pdb_add_person(&pdb, "Rasten Hound", 10);
   pdb_add_person(&pdb, "Lisa Liquid", 23);
   pdb_add_person(&pdb, "Jenny Penny", 39);
   pdb_youngest_person(&pdb, name, &age);
   pdb_print_person(name, age);
   pdb_youngest_person(&pdb, name, &age);
   pdb_print_person(name, age);
   pdb_add_person(&pdb, "Ron River", 27);
   pdb_youngest_person(&pdb, name, &age);
   pdb_youngest_person(&pdb, name, &age);
   pdb_print_person(name, age);
   pdb_free_all(&pdb);

   return 0;
}

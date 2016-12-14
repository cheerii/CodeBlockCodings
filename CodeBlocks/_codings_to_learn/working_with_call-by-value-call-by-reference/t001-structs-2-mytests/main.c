#include <stdio.h>
#include <string.h>

/** \brief
 *
 * \
 * \
 * \ SOLVED Problem with: add_book(&Book2, "what you SHOULD see"); -> now we use TITLE as parameter, so the address of local
 * \ char title[32] is given to the function and we can change the string char  title[50] = "das sollte hier NICHT stehen";
 * \ to
 * \ see t001-structs-2-mytests
 *
 */

typedef struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} test1;

int add_book(test1 *Book2, char *title){


    printf("add_book:: Adresse von title ist: %d\n\n", title);

    //printf("add_book:: Adresse von Obj-&Book2 ist: %d\n\n", &Book2);
    printf("add_book:: Adresse von Obj-Book2 ist: %d\n\n", Book2);

    //strncpy(title, "juhuuu geschafft", 31);
    strcpy(title, "juhuuu geschafft");
       /* book 2 specification */
   //strcpy( Book2->title, "that what we want see");
   strcpy( Book2->author, "Zara Ali");
   strcpy( Book2->subject, "Telecom Billing Tutorial");
   Book2->book_id = 6495700;

   return;

}

void print_book(const char *title){

    printf("print_book:: Adresse von title = %d\n\n", title);
    printf("print_book:: title = %s\n\n", title);
}

int main( ) {

   struct Books Book1;        /* Declare Book1 of type Book */
   test1 Book2;        /* Declare Book2 of type Book */

   char  title[50] = "das sollte hier NICHT stehen";
   int   book_id;
//   printf("main:: Adresse von titel ist: %d\n\n", title); // ist gleich wie &titel
   printf("main:: Adresse von &titel local ist: %d\n\n", &title);

   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali");
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
////   strcpy( Book2.title, "Telecom Billing");
////   strcpy( Book2.author, "Zara Ali");
////   strcpy( Book2.subject, "Telecom Billing Tutorial");
////   Book2.book_id = 6495700;

    printf("main:: Adresse von Obj-&Book2 ist: %d\n\n", &Book2);
    //printf("main:: Adresse von Obj-Book2 ist: %d\n\n", Book2);
    //add_book(&Book2, title);
    add_book(&Book2, title);

    print_book(title);

   /* print Book1 info */
   //printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}

#include <stdio.h>
#include <stdlib.h>


struct node
{
        int data;
        struct node *next;
}node1;

int main()
{

    struct node *start = (struct node1 *) malloc(sizeof(node1));

    struct node *temp1 = (struct node1 *) malloc(sizeof(node1));

    start->next = temp1;
    temp1->data = 111;

    struct node *temp2 = (struct node1 *) malloc(sizeof(node1));

    temp1->next=temp2;
    temp2->data = 222;

    struct node *temp3 = (struct node1 *) malloc(sizeof(node1));

    temp2->next=temp3;
    temp3->data=333;

    printf("Das letzte Element ist: %d", start->next->next->next->data);

    struct node *temp001;
    temp001 = start;


while(temp001->next!=NULL)
    {
    printf("\n\nData ist: %d\n",temp001->data);
    printf("Adresse ist des naechsten objekts ist: %d\n\n",temp001->next);
    temp001=temp001->next;

    }

    printf("\nletzte das zuvor erzeugte objekt hat die Adresse/liegt an der Adresse: %d\n\n", temp001);


    return 0;
}

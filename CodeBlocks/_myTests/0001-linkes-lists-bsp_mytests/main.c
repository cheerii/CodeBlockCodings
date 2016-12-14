#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

struct node
{
        int data;
        struct node *next;
}node1;

int main()
{
        struct node *start = (struct node1 *) malloc(sizeof(node1));
        struct node *tmp = (struct node1 *) malloc(sizeof(node1));;// = (struct node1 *)malloc(sizeof(node1));
        tmp->data=NULL;
        tmp->next=NULL;

        //printf("sizeof start: %d", sizeof(start));
        //temp = start;

        start->next = NULL;
        while(1)
        {
                int query;
                printf("1.Insert\n");
                printf("2.Print\n");
                printf("3.QUIT\n");
                printf("Enter your choice:\n");
                scanf("%d",&query);
                if(query==1)
                {
                        int data;
                        printf("Enter the element to be inserted.\n");
                        scanf("%d",&data);

                        struct node *zwisch = (struct node1 *)malloc(sizeof(node1));
                        zwisch->data = data;
                        zwisch->next=NULL;


//                        printf("start->next %x\n\n", start->next);
//                        printf("zwisch %x\n\n", zwisch);
//                        printf("zwisch->data %d\n\n", zwisch->data);
//                        printf("zwisch->next %x\n\n", zwisch->next);

                        if(start->next == NULL){

                            printf("Entering if\n\n");
                            start->next = zwisch; //die neue speicheradresse von malloc fuer temp wird in start gespeichert
//                            printf("start->next %x\n\n", start->next);
                        } else {

                        printf("Entering ELSE IF\n\n");

                        tmp = start;

//                        printf("tmp %x\n\n", tmp);
//
//                        printf("start->next %x\n\n", start->next);
//                        printf("zwisch %x\n\n", zwisch);
//                        printf("zwisch->data %d\n\n", zwisch->data);
//                        printf("zwisch->next %x\n\n", zwisch->next);

                        while(tmp->next != NULL)
                        {
                                printf("WHILE %x\n\n", tmp->next);
//                                sleep(9);
                                tmp=tmp->next; //Die Adresse vom aktuellen Objekt (start->next) wird in start gespeichert
                                //temp1=temp1->next;
                        }

//                        temp1tmp->next=temp11;
                        tmp=tmp->next;


                        }


                }
                else if(query ==2)
                {
                        printf("The list is as below:\n");
                        struct node *temp002;
                        temp002=start;
                        while(temp002->next != NULL)
                        {
                                printf("%d \t",temp002->data);
                                temp002=temp002->next;
                        }
                }
                else if(query ==3){

                    exit(1);
                }
                else
                break;
        }

        return 0;
}

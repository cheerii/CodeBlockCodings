#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node
{
        int data;
        struct node *next;
}node1;

//struct node *tmpForFun = (struct node1 *)malloc(sizeof(node1));



int main()
{

    struct node *start = (struct node1 *)malloc(sizeof(node1));
    start->next=NULL;
    start->data=1;
    struct node *tmp2 = (struct node1 *)malloc(sizeof(node1));

        while(1)
        {

            struct node *tmpINwhile = (struct node1 *)malloc(sizeof(node1));
                int query;
                printf("\n\n1.Insert\n");
                printf("2.Print\n");
                printf("3.QUIT\n");
                printf("Enter your choice:\n");
                scanf("%d",&query);
                if(query==1)
                {
                        int data;
                        printf("Enter the element to be inserted.\n");
                        scanf("%d",&data);

                        struct node *tmp = (struct node1 *)malloc(sizeof(node1));
                        printf("========= Created new Speicheradresse: %d\n\n", tmp);
                        tmp->next=NULL;
                        tmp->data=data;


                        if(start->next == NULL){

                            printf("IF %d\n\n");
                            tmp2=start;

                            start->next=tmp;
                        } else {

//                        tmp->data=data;
//                        tmp->next=NULL;



                        while(tmp2->next != NULL)
                        {
                                printf("WHILE %d :: speicheradresse %d\n\n", tmp2->data, tmp2->next);
                                sleep(2);
                                tmp2=tmp2->next; //Die Adresse vom aktuellen Objekt (start->next) wird in start gespeichert
                        }

                        tmp2->next=tmp;

                        }


                        }


                else if(query == 2)
                {


                        struct node *tmpSearch = (struct node1 *)malloc(sizeof(node1));
                        tmpSearch=start;

                        printf("start->next %d speicheradresse: %d\n", tmpSearch->data, tmpSearch->next);
                        printf("start->next->next %d speicheradresse: %d\n", tmpSearch->next->data, tmpSearch->next->next);
                        printf("start->next->next->next %d speicheradresse: %d\n", tmpSearch->next->next->data, tmpSearch->next->next->next);
                        printf("start->next->next->next->next %d speicheradresse: %d\n", tmpSearch->next->next->next->data, tmpSearch->next->next->next->next);
                        printf("start->next->next->next->next->next %d speicheradresse: %d\n", tmpSearch->next->next->next->next->data, tmpSearch->next->next->next->next->next);


                }
                else if(query == 3){

                    exit(1);
                }
                else
                break;
        }

        return 0;
}

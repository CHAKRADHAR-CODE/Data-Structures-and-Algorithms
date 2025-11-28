#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
};
int main()
{
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    n1->data='R';
    n1->next=NULL;

    struct node *n2=(struct node *)malloc(sizeof(struct node));
    n2->data='U';
    n2->next=NULL;

    struct node *n3=(struct node *)malloc(sizeof(struct node));
    n3->data='P';
    n3->next=NULL;

    struct node *n4=(struct node *)malloc(sizeof(struct node));
    n4->data='A';
    n4->next=NULL;

    //sending
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    //printing
    printf("%c",n1->data);
    printf("%c",n1->next->data);
    printf("%c",n1->next->next->data);
    printf("%c",n1->next->next->next->data);

    return 0;
}

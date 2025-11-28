#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define max 100
struct node{
    int data;
    struct node* next;
}
struct node* head=NULL;
int beg(int val){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    if(head==NULL){
        new->next=new;
        return;
    }
    struct node* temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=new;
    new->next=head;
    head=new;
}
int 
int main(){
    printf("1.beg\n");
    printf("2.eng\n");
    printf("3.pos\n");
    printf("4.db\n");
    printf("5.dt\n");
    printf("6.dp\n");
    printf("7.display\n");
    printf("8.ser\n");
    printf("9.rev\n");
    printf("0.end\n");
    int d=0,n,t,val;
    while(d==0){
        printf("enter the option : ");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enetr The value : ");
                scanf("%d",&val);
                beg(val);
                printf("\n");
                break;
            case 2:
                printf("Enetr The value : ");
                scanf("%d",&val);
                end(val);
                printf("\n");
                break;
            case 3:
                printf("Enetr The value : ");
                scanf("%d",&val);
                printf("Enter The position : ");
                scanf("%d",&t);
                pos(val,t);
                printf("\n");
                break;
            case 4:
                db();
                printf("\n");
                break;
            case 5:
                dt();
                printf("\n");
                break;
            case 6:
                printf("Enter The position : ");
                scanf("%d",&t);
                dp(t);
                printf("\n");
                break;
            case 7:
                printf("linked-list : ");
                display();
                break;
            case 8:
                printf("Enetr The value : ");
                scanf("%d",&val);
                ser(val);
                printf("\n");
                break;
            case 9:
                printf("Reverse-linked-list : ");
                display();
                break;
            case 0:
                d=1;
                break;
            default :
                printf("WRONG OPTION\n");
                break;
        }
    }
    return 0;
}
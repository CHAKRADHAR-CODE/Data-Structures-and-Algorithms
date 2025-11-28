#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};

struct node *head=NULL;

void insert_at_node(int v){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void display(){
    struct node *temp=head;
    if(head==NULL){
        printf("NO NODES TO DISPLAY\n");
    }
    else{
        while(temp != NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    int ch;
    while(1)
    {
        printf("CHOOSE an option : \n  1)insert at head.\n  2)insert at tail.\n  3) display\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            int v;
            printf("Please Enter The Integer Value :");
            scanf("%d",&v);
            insert_at_node(v);
        }
        else if(ch==2)
        {
            printf("dxk");
        }
        else if(ch==3)
        {
            display();
        }
        else{
        	break;
		}

    }
    return 0;
}
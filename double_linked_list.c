#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
typedef struct node n;
n *head=NULL;
n *tail=NULL;
n * create_new_node(int val)
{
	n *new_node = (n *)malloc(sizeof(n));
	new_node->data = val;
	new_node->next = NULL;
    new_node->prev = NULL;
	return new_node; // Returning the created node
}

void insert_at_head(int val){
    n *new_node=create_new_node(val);    // ch==1
    if(head==NULL && tail == NULL){
        head=new_node;
        tail=new_node;
    }
    else{
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}

void insert_at_tail(int val){
    n *new_node=create_new_node(val);    // ch==2
    if(head==NULL && tail == NULL){
        head=new_node;
        tail=new_node;
    }
    else{
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
}

void display_head(){
    n *temp=head;
    if(head==NULL){
        printf("Data Is Not Their\n");   //ch==3
        return;
    }
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void display_tail(){
    n *temp=tail;
    if(tail==NULL){
        printf("Data Is Not Their\n");              //ch==4
        return;
    }
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

void delete_at_head()
{
    if(head==NULL)
    {
        printf("There is no element in the list\n");            //ch==5
    }\
    else if(head==tail){
        head=NULL;
        tail==NULL;
        printf("<< TASK COMPLEATED >>\n");
    }
    else
    {
        head=head->next;
        head->prev=NULL;
        printf("<< TASK COMPLEATED >>\n");
    }
}

void delete_at_tail()
{
    if(tail==NULL)
    {
        printf("There is no element in the list\n");            //ch==6
    }
    else if(head==tail){
        head=NULL;
        tail==NULL;
        printf("<< TASK COMPLEATED >>\n");
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
        printf("<< TASK COMPLEATED >>\n");
    }
}

int main(){
    int ch;
    printf("                           INSERTING MANAUL \n");
    printf("                           1. Insert at Head\n");
    printf("                           2. Insert at Tail\n");
    printf("                           3. Display from head\n");
    printf("                           4. Display from tail\n");
    printf("                           5. Delete at head\n");
    printf("                           6. Delete at Tail\n");
    printf("                           7. Count Nodes\n");
    printf("                           8. insert at a position \n");
    printf(">>> Any other key to exit.\n");
    while(1){
        printf("enter the number :");
        scanf("%d",&ch);
        if(ch==1)
        {
            int val;
            printf("Enter the value to be inserted at head:\n");
            scanf("%d",&val);   
            insert_at_head(val);
        }
        else if(ch==2){
            int val;
            printf("Enter the value to be inserted at tail:\n");
            scanf("%d",&val);   
            insert_at_tail(val);
        }
        else if(ch==3){
            display_head();
        }
        else if(ch==4){
            display_tail();
        }

        else if(ch==5)
        {
            delete_at_head();
        }
        else if(ch==6){
            delete_at_tail();
        }
        else if(ch==7){
            
        }
        else if(ch==8){
            
        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
    return 0;
}
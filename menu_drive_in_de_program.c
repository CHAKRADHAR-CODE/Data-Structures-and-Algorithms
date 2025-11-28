#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node * create_new_node(int val)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = NULL;
	return new_node; // Returning the created node
}

void insert_at_head(int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void insert_at_position(int p,int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    struct node* temp=head;
    if(head==NULL){
        printf("No Data Is Their");
        return;
    }
    if(p==0)
    {
        insert_at_head(val);
        printf("linked list changed\n");                        
    }
    else
    {
        while(p>1 && temp->next != NULL){
            temp=temp->next;
            p--;
        }
        newnode->next = temp->next;
        temp->next=newnode;
    }
}
/*
void insert_at_position(int p,int val){
    //creation of node to insert 
    struct node *new_node=create_new_node(val);
    //stop at pos -1
    struct node *temp=head;
    while(p>0){
        temp=temp->next;
        p--;
    }
    new_node->next = temp->next;
    temp->next=new_node;
}
    */
void insert_at_tail(int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node* temp=head; 
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void delete_at_head()
{
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        struct node* del_node= head;
        head=head->next;
        free(del_node); 
    }
}
void delete_at_tail()
{

        struct node* temp=head;
        
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
}
void search_element(int search){
    struct node* temp=head;
    int found=0;
    while (temp != NULL)
    {
        if(temp->data == search){
            found=1;
            break;
        }
        temp=temp->next;
    }
    printf("%s\n........\n",found ? "Found" : "Not Found");
}
void getnode(){
    int count=0;
    struct node* temp=head;
    while (temp != NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("NUMBER OF NODE ARE = %d",count);
}
int main()
{
    int n;
    printf("                           INSERTING MANAUL \n");
    printf("                           1. Insert at Head\n");
    printf("                           2. Insert at Tail\n");
    printf("                           3. Display List\n");
    printf("                           4. Delete at Head\n");
    printf("                           5. Delete at Tail\n");
    printf("                           6. Search an Element\n");
    printf("                           7. Count Nodes\n");
    printf("                           8. insert at a position \n");
    printf(">>> Any other key to exit.\n");

    while(1)
    {
        printf("choice any one above not more then 0-7 : ");
        scanf("%d",&n);
        if(n==1)
        {
            int val;
            printf("Enter the value to be inserted at head:\n");
            scanf("%d",&val);   
            insert_at_head(val);
        }
        else if(n==2)
        {
            int val;
            printf("Enter the value to be inserted at tail:\n");
            scanf("%d",&val);   
            insert_at_tail(val);
        }
        else if(n==3)
        {
            display();
        }
        else if(n==4)
        {
            delete_at_head();
        }
        else if(n==5)
        {
            delete_at_tail();
        }
        else if(n==6){
            int serch;
            printf("Enter the element :");
            scanf("%d",&serch);
            search_element(serch);
        }
        else if(n==7){
            getnode();
        }
        else if(n==8){
            int p,val;
            printf("Enter the Position :");
            scanf("%d",&p);
            printf("Enter The Value : ");
            scanf("%d",&val);
            insert_at_position(p,val);
        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
}
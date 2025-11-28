#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}treenode;

treenode* create_treenode(int val)
{
    treenode* newnode=(treenode *)malloc(sizeof(treenode));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

treenode insertANewnode(treenode root,int val)
{
    treenode* new_node=create_treenode(val);
    if(root==NULL)
    {
        root=new_node;
        return root;
    }
    
    treenode* temp=root;
    treenode* parent=NULL;

    while(temp!=NULL)
    {
        parent=temp;
        if(temp->data > val) temp=temp->left;
        else temp=temp->right;
    }
    if(val < parent->data) parent->left=new_node;
    else parent->right=new_node;
    return root;
}
void InOrder(treenode *root){
	if(root!=NULL){
		InOrder(root->left);
        printf("%d ",root->data);
		InOrder(root->right);
	}
}

int main()
{
    printf("1.Construct\n2.Transversal\n3.Search\nAny other to exit\n");
    int t;
    treenode* root=NULL;
    
    while(1)
    {
        scanf("%d",&t);
        if(t==1)
        {
            // Construct a BST
            int num[]={40,32,68,54,79,16,52,29,146,7};
            int n=sizeof(num)/sizeof(num[0]);
            for(int i=0;i<n;i++)
            {
                root=insertANewnode(root,num[i]);
            }
            printf("Done\n");
        }
        else if(t==2)
        {
            // In-order
            InOrder(root);

        }
        else if(t==3)
        {
            // Search
        }
        else break;
    }
}
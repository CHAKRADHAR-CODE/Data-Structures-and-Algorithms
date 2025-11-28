// For DFT Tree Traversals
// Code to construct a tree manually
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node treenode;

treenode *createNewNode(int val) {
	// Create a new node
	treenode *new_node = (treenode *)malloc(sizeof(treenode));
	// put value in data part
	// set right and left to NULL
	new_node->data = val;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void preOrder(treenode *root) {
	if (root != NULL)
	{
		printf("%d ", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}   
}
void inOrder(treenode *root) {
	if (root != NULL)
	{
		inOrder(root->left);
		printf("%d ", root->data);
		inOrder(root->right);
	} 
}
void postOrder(treenode *root) {
	if (root != NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ", root->data);
	}
}
int main() {
	// Create 7 nodes
	treenode *n1 = createNewNode(10);
	treenode *n2 = createNewNode(20);
	treenode *n3 = createNewNode(30);
	treenode *n4 = createNewNode(40);
	treenode *n5 = createNewNode(50);
	treenode *n6 = createNewNode(60);
	treenode *n7 = createNewNode(70);
	// Connecting the nodes
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	treenode *root = n1;
//	printf("%d ", root->left->left->data);
	printf("Pre-Order Traversal: ");
	preOrder(root);
	printf("\n");
	printf("In-Order Traversal: ");
	inOrder(root);
	printf("\n");
	printf("Post-Order Traversal: ");
	postOrder(root);
	printf("\n");
	return 0;
}
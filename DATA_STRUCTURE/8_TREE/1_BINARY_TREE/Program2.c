// IMPLEMENTATION OF BINARY TREE USING AN ARRAY

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

struct Node* createNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

static int idx = -1;

struct Node* buildTree(int arr[]){	
	idx++;
	if(arr[idx] == -1){
		return NULL;
	}
	
	struct Node* newNode = createNode(arr[idx]);
	newNode->left = buildTree(arr);
	newNode->right = buildTree(arr);
	return newNode;
}

void preOrder(struct Node* root){
	if(root == NULL){
		return;
	}
	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void main(){
	int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
	struct Node* root = buildTree(nodes);
	preOrder(root);
	printf("\n");
}

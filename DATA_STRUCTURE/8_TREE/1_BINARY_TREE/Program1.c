#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}Node;

struct Node* createNode(int data){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->right = NULL;
	newNode->left = NULL;
	return newNode;
}

void main(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode = createNode(10);
	newNode->left = createNode(20);
	newNode->right = createNode(30);
}

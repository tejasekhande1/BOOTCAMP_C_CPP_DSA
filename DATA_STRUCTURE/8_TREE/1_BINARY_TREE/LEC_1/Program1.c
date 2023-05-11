#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

Node* head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void buildTree(Node* newNode){
	if(head == NULL){
		Node* root = createNode();
		head = root;
		buildTree(root);
	}else{
		char ch;
		printf("Do you want to INSERT AT LEFT (Y|N) : ");
		scanf(" %c",&ch);
		if(ch == 'Y' || ch == 'y'){
			Node* userNode = createNode();
			newNode->left = userNode;
			buildTree(userNode);	
		}
		
		printf("Do you want to INSERT AT RIGHT (Y|N) : ");
		scanf(" %c",&ch);
		if(ch == 'Y' || ch == 'y'){
			Node* userNode = createNode();
			newNode->right = userNode;
			buildTree(userNode);	
		}
	}
}

Node* createTree(Node* newNode){
	if(newNode == NULL){
		Node* root = createNode();
		newNode = root;
		createTree(root);
	}else{
		char ch;
		printf("Do you want to INSERT AT LEFT (Y|N) : ");
		scanf(" %c",&ch);
		if(ch == 'Y' || ch == 'y'){
			Node* userNode = createNode();
			newNode->left = userNode;
			createTree(userNode);	
		}
		
		printf("Do you want to INSERT AT RIGHT (Y|N) : ");
		scanf(" %c",&ch);
		if(ch == 'Y' || ch == 'y'){
			Node* userNode = createNode();
			newNode->right = userNode;
			createTree(userNode);	
		}
	}

	return newNode;
}

void postOrder(Node* root){
	if(root == NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf(" %d ",root->data);
}

void preOrder(Node* root){
	if(root == NULL){
		return;
	}

	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node* root){
	if(root == NULL){
		return;
	}
	inOrder(root->left);
	printf(" %d ",root->data);
	inOrder(root->right);
}

void main(){
	buildTree(head);
	inOrder(head);
	printf("\n");
}

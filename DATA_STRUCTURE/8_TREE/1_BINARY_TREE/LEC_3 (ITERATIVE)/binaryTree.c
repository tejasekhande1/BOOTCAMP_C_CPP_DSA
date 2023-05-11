#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

typedef struct Stack{
	TreeNode* btNode;
	struct Stack* next;
}Stack;

TreeNode* addNode(int level){
	
	level++;
	
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	
	char ch;
	printf("Do want to add LEFT Node of Level %d : ",level);
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		newNode->left = addNode(level);
	}else{
		newNode->left = NULL;
	}
	
	printf("Do want to add RIGHT Node of Level %d : ",level);
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		newNode->right = addNode(level);
	}else{
		newNode->right = NULL;
	}

	return newNode;
}

Stack* top = NULL;

void push(TreeNode* temp){
	Stack *newNode = (Stack*)malloc(sizeof(Stack));
	newNode->btNode = temp;
	newNode->next = top;
	top = newNode;
}

TreeNode* pop(){
	TreeNode* ret = top->btNode;
	Stack* temp = top;
	top = top->next;
	free(temp);
	return ret;
}

bool isEmpty(){
	return (top == NULL) ? true : false;
}

void itrInOrder(TreeNode* root){
	if(root == NULL){
		printf("Tree NOT FOUND\n");
		return;
	}

	TreeNode *temp = root;
	while(!isEmpty() || temp != NULL){
		if(temp != NULL){
			push(temp);
			temp = temp->left;
		}else{
			TreeNode* item = pop();
			printf(" %d ",item->data);
			temp = item->right;
		}
	}
}

void inOrder(TreeNode* root){
	if(root == NULL){
		return;
	}

	inOrder(root->left);
	printf(" %d ",root->data);
	inOrder(root->right);
}

void main(){
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(root->data));
	printf("Tree Rooted With %d\n",root->data);

	char ch;
	printf("Do want to add LEFT SubTree ? ");
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		root->left = addNode(0);
	}else{
		root->left = NULL;
	}
	
	printf("Do want to add RIGHT SubTree ? ");
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		root->right = addNode(0);
	}else{
		root->right = NULL;
	}
	
	printf("OUTPUT : \n");
	itrInOrder(root);
	printf("\n");
}

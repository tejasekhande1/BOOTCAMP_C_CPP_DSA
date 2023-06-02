#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

typedef struct Queue{
	TreeNode* btNode;
	struct Queue* next;
}Queue;

Queue* front = NULL;
Queue* rear = NULL;

void Enqueue(TreeNode* node){
	Queue* newNode = (Queue*)malloc(sizeof(Queue));
	newNode->btNode = node;
	newNode->next = NULL;

	if(front == NULL && rear == NULL){
		front = newNode;
		rear = newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}
}

TreeNode* Dequeue(){
	if(front == NULL){
		printf("Queue is Empty\n");
		return NULL;
	}else{
		TreeNode* ret = front->btNode;
		Queue* temp = front;
		front = front->next;
		free(temp);
		return ret;
	}
}

bool isEmpty(){
	return (front == NULL) ? true : false;
}

void levelOrder(TreeNode* root){
	Enqueue(root);
	Enqueue(NULL);
	while(!isEmpty()){
		TreeNode* temp = Dequeue();
		if(temp != NULL){
			printf(" %d ",temp->data);

			if(temp->left != NULL){
				Enqueue(temp->left);
			}
			
			if(temp->right != NULL){
				Enqueue(temp->right);
			}
		}else{
			if(isEmpty()){
				return;
			}else{
				printf("\n");
				Enqueue(NULL);
			}
		}
	}
}

TreeNode* buildTree(int level){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	
	char ch;
	printf("Do you want add Left SubTree At Level %d ? ",level);
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		newNode->left = buildTree(level+1);
	}else{
		newNode->left = NULL;
	}
	
	printf("Do you want add Right SubTree At Level %d ? ",level);
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		newNode->right = buildTree(level+1);
	}else{
		newNode->right = NULL;
	}

	return newNode;
}

void preOrder(TreeNode* root){
	if(root == NULL) return;
	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void main(){
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(root->data));
	printf("Tree Rooted With %d\n",root->data);

	char ch;
	printf("Do you want add Left SubTree ? ");
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		root->left = buildTree(1);
	}else{
		root->left = NULL;
	}
	
	printf("Do you want add Right SubTree ? ");
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		root->right = buildTree(1);
	}else{
		root->right = NULL;
	}

//	preOrder(root);
//	printf("\n");

	levelOrder(root);
	printf("\n");
}

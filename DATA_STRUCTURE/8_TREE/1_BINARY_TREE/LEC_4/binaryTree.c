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

Queue* front = NULL;
Queue* rear = NULL;

void Enqueue(TreeNode* temp){
	Queue* newNode = (Queue*)malloc(sizeof(Queue));
	newNode->btNode = temp;
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
		if(temp == NULL){
			if(isEmpty()){
				return;
			}else{
				printf("\n");
				Enqueue(temp);
			}
		}else{
			printf(" %d ",temp->data);

			if(temp->left != NULL)
				Enqueue(temp->left);

			if(temp->right != NULL)
				Enqueue(temp->right);
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
	
	levelOrder(root);
	printf("\n");
}

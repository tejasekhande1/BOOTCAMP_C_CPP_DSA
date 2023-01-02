#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->prev = NULL;
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void printNode();

void sumData(){
	Node* temp = head;
	while(temp!=NULL){
		int sum = 0;
		int num = temp->data;
		while(num > 0){
			int last = num%10;
			sum = sum+last;
			num = num/10;
			temp->data = sum;
		}
		temp = temp->next;
	}
	printNode();
}

void printNode(){
	Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("|%d|->",temp->data);
		}else{
			printf("|%d|\n",temp->data);
		}
		temp = temp->next;
	}
}

void main(){
	int num;
	printf("Enter No Of Nodes : ");
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		addNode();
	}
	printNode();

	sumData();
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	struct Node *prev;
	char name[20];
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->prev = NULL;
	printf("Enter Name : ");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		(*newNode).name[i] = ch;
		i++;
	}
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

void printNode(){
	Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("|%s|->",temp->name);
		}else{
			printf("|%s|\n",temp->name);
		}
		temp = temp->next;
	}
}

void revName(){

	Node *temp = head;

	while(temp != NULL){
		int y = len;
		int start = 0;
		for(int i=0 ; i<y/2 ; i++){
			char ch = (*temp).name[start];
			(*temp).name[start] = (*temp).name[len];
			(*temp).name[len] = ch;
			len--;
			start++;
		}
		temp = temp->next;
	}
}

void main(){
	int num;
	printf("Enter No Of Nodes : ");
	scanf("%d",&num);
	getchar();
	for(int i=1 ; i<=num ; i++){
		addNode();
	}

	printNode();
	revName();
	printNode();
}

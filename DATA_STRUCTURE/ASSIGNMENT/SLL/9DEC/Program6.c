#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char name[20];
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
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

void findName(int len){
	Node *temp = head;
	while(temp != NULL){
		int len1 = strlen(temp->name);
		if(len == len1){
			printf("|%s|",temp->name);
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

	int len;
	printf("Enter Length : ");
	scanf("%d",&len);
	findName(len);

}

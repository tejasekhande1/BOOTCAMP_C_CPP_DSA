#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = NULL;
	head = newNode;
}

void printNode(){
	struct Node *temp = head;
	while(temp !=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void main(){
	addNode();
	printNode();
}

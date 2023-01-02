#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void addNode(struct Node *head){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = NULL;
	head = newNode;
}
void printNode(struct Node *head){
	struct Node *temp = head;
	while(temp !=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
void main(){
	struct Node *head = NULL;
	addNode(head);
	printNode(head);
}

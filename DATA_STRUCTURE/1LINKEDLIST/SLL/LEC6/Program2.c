#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node* addNode(struct Node **head){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = NULL;
//	return newNode;
	*head = newNode;
	return *head;
}
void printNode(struct Node **head){
	struct Node *temp = *head;
	while(temp !=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
void main(){
	struct Node *head = NULL;
	head = addNode(&head);
	printNode(&head);
}

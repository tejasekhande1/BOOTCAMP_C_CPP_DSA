#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
	int data;
	struct Node *next;
};

void main(){
	struct Node *head = NULL;
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = NULL;
	head = newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 20;
	newNode->next = NULL;
	head->next = newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 30;
	newNode->next = NULL;
	head->next->next = newNode;

	struct Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);

		temp = temp->next;
	}
	printf("\n");
}

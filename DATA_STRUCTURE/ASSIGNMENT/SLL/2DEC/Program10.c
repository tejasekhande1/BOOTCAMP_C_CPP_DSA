#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
	char pName[20];
	int jerNo;
	struct Node *next;
};

struct Node *head = NULL;

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Player Name : \n");
	char ch;
	int i=0;
	getchar();
	while((ch = getchar()) != '\n'){
		(*newNode).pName[i] = ch;
		i++;
	}

	printf("Enter Jersy No : \n");
	scanf("%d",&newNode->jerNo);

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		struct Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printNode(){
	struct Node *temp = head;
	while(temp != NULL){
		printf("|%s|->",temp->pName);
		printf("|%d|",temp->jerNo);
		temp = temp->next;
		printf("\n");
	}
}

void main(){
	int n = 0;
	printf("Enter Number Of Nodes : \n");
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++){
		addNode();
	}

	printNode();
}

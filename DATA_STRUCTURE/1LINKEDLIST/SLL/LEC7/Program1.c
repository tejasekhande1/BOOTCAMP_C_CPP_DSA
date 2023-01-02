#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Movie{
	char mName[20];
	float imdb;
	struct Movie *next;
}Mov;

Mov *head = NULL;


void cleanInput(char* input){
	int len = strlen(input);
	int i;
	for(i = 0; i < len-1; i++) {}
	input[i] = '\0';
}

void addNode(){
	Mov *newNode = (Mov*)malloc(sizeof(Mov));
	printf("Enter Movie Name : \n");
	scanf(" ");
	fgets(newNode->mName,15,stdin);
	cleanInput(newNode->mName);
	printf("Enter Rating : \n");
	scanf("%f",&newNode->imdb);

	if(head == NULL){
		head = newNode;
	}else{
		Mov *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printNode(){
	Mov *temp = head;
	while(temp != NULL){
		printf("|%s->",temp->mName);
		printf("%f|",temp->imdb);
		temp = temp->next;
	}
}

void main(){
	addNode();
	addNode();
	addNode();
	printNode();
}

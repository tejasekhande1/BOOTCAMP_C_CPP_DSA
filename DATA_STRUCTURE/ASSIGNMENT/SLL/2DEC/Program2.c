#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
	char sName[20];
	double pop;
	float budget;
	struct Node *next;	
};

struct Node *head = NULL;

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter State : ");
	char ch;
	int i=0;
	getchar();
	while((ch = getchar())!='\n'){
		(*newNode).sName[i] = ch;
		i++;
	}

	printf("Enter Population : ");
	scanf("%lf",&newNode->pop);
	printf("Enter Budget : ");
	scanf("%f",&newNode->budget);

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
		if(temp->next != NULL){
			printf("|%s|",temp->sName);
			printf("%lf|",temp->pop);
			printf("%f|->",temp->budget);
		}else{
			printf("|%s|",temp->sName);
                        printf("%lf|",temp->pop);
                        printf("%f|",temp->budget);
		}

		temp = temp->next;
	}

	printf("\n");
}

void main(){
	int no;
	printf("Enter No of Nodes : \n");
	scanf("%d",&no);
	getchar();
	for(int i=1 ; i<=no ; i++){
		addNode();
	}
	printNode();
}

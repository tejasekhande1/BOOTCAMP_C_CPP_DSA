#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Employee{
	char empName[20];
	int empId;
	struct Employee *next;
}Emp;

Emp *head = NULL;

Emp* createNode(){
	Emp *newNode = (Emp*)malloc(sizeof(Emp));
	printf("Enter Employee Name : \n");
	char ch;
	int i=0;
	getchar();
	while((ch = getchar()) != '\n'){
		(*newNode).empName[i++] = ch;
	}
	printf("Enter Employee ID : \n");
	scanf("%d",&newNode->empId);
	newNode->next = NULL;

	return newNode;
}

void addNode(){
	Emp *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		Emp *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printNode(){
	Emp *temp = head;
	while(temp!=NULL){
		if(temp->next != NULL){
			printf("|%s ",temp->empName);
			printf(": %d|->",temp->empId);
		}else{
			printf("|%s ",temp->empName);
			printf(": %d|",temp->empId);
		}

		temp = temp->next;
	}
	printf("\n");
}

int count = 0;

void countNode(){
	Emp *temp = head;
	while(temp!=NULL){
		temp = temp->next;
		count++;
	}

	printf("Total Count : %d\n",count);
}

void addFirst(){
	Emp *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void addAtPos(int pos){
	if(pos == count){
		addNode();
	}else if(pos == 1){
		addFirst();
	}else if(count > pos){
		Emp *newNode = createNode();
		Emp *temp = head;
		while(pos-2){
			temp = temp->next;
			pos--;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}else{
		printf("Invalid Input");
	}	
}

void main(){
	int n;
	printf("Enter Number of Nodes : \n");
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++){
		addNode();
	}

	printNode();
	addFirst();
	printNode();
	countNode();
	int pos;
	printf("Enter Position Where Add Node : \n");
	scanf("%d",&pos);
	addAtPos(pos);
	printNode();
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Company{
	int empId;
	char empName[20];
	float sal;
	struct Company *next;
}cmp;

cmp *head = NULL;

void putData(){

	cmp *obj = (cmp*)malloc(sizeof(cmp));
	printf("Enter empID : ");
	int Id;
	scanf("%d",&Id);
	printf("Enter empNAME : ");
	char Name[20];
	scanf("%s",Name);
	printf("Enter empSAL : ");
	float Sal;
	scanf(" %f",&Sal);

	obj->empId = Id;
	strcpy(obj->empName,Name);
	obj->sal = Sal;
	obj->next = NULL;

	if(head == NULL){
		head = obj;
	}else{
		cmp *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		
		temp->next = obj;
	}
}

void printData(){
	cmp *temp = head;
	while(temp!=NULL){
		printf("|%d|->",temp->empId);
		printf("|%s|->",temp->empName);
		printf("|%f|\n",temp->sal);
		temp = temp->next;
	}
}

void main(){
	putData();
	putData();
	putData();
	printData();
}

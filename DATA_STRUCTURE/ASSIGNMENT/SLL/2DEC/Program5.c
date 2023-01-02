#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
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

void addNodeData(){
	int sum=0;
	struct Node *temp = head;
	while(temp != NULL){
		sum += temp->data;
		temp = temp->next;
	}
	printf("Sum of Nodes Data : %d\n",sum);
}

void main(){
	int no;
	printf("Enter No of Nodes : \n");
	scanf("%d",&no);

	for(int i=1 ; i<=no ; i++){
		addNode();
	}

	addNodeData();
}

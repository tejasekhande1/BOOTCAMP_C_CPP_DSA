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


void primeNodeData(){
	struct Node *temp = head;
	int cnt = 0;
	while(temp!= NULL){
		for(int i=2 ; i<temp->data; i++){
			if(temp->data % i == 0){
				cnt++;
				break;
			}
		}
		
		if(cnt == 0 ){
			printf("|%d| is PRIME\n",temp->data);
		}
		
		cnt = 0;
		temp = temp->next;
	}
}

void main(){
	int no;
	printf("Enter No of Nodes : \n");
	scanf("%d",&no);

	for(int i=1 ; i<=no ; i++){
		addNode();
	}

	primeNodeData();
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
	char mName[20];
	int noOfShop;
	float rev;
	struct Node *next;
};
struct Node *head = NULL;
void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	getchar();
	printf("Enter Mall Name : \n");
	char ch;
	int i=0;
	while((ch = getchar()) != '\n'){
		(*newNode).mName[i] = ch;
	       	i++;	
	}
	printf("Enter No of Shops : \n");
	scanf("%d",&newNode->noOfShop);
	getchar();
	printf("Enter Revenue of Shops : \n");
	scanf("%f",&newNode->rev);
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
			printf("|%s|",temp->mName);
			printf("|%d|",temp->noOfShop);
			printf("|%f|->",temp->rev);
		}else{
			printf("|%s|",temp->mName);
			printf("|%d|",temp->noOfShop);
			printf("|%f|",temp->rev);
		}

		temp = temp->next;
	}
}

void main(){
	int no;
	printf("Enter No of Nodes : ");
	scanf("%d",&no);
	for(int i=1 ; i<=no ; i++){
		addNode();
	}
	printNode();
}

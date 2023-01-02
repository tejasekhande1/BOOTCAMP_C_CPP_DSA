#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
	char fName[20];
	int month;	
	struct Node *next;
};

struct Node *head = NULL;

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	
	printf("Enter FestiVal Name : ");
	char ch;
	int i=0;
	getchar();
	while((ch = getchar()) != '\n'){
		(*newNode).fName[i]=ch;
		i++;
	}

	printf("Enter Month No of Festival : ");
	scanf("%d",&newNode->month);

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
			printf("|%s|",temp->fName);
			printf("|%d|->",temp->month);
		}else{
			printf("|%s|",temp->fName);
			printf("|%d|",temp->month);
		}

		temp = temp->next;
	}

	printf("\n");
}

void main(){
	int no;
	printf("Enter No of Nodes : \n");
	scanf("%d",&no);
	for(int i=1 ; i<=no ; i++){
		addNode();
	}
	printNode();
}

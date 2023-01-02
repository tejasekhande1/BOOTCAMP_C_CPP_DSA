#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char name[20];
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Name : ");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		(*newNode).name[i] = ch;
		i++;
	}
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printNode(){
	Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("|%s|->",temp->name);
		}else{
			printf("|%s|\n",temp->name);
		}
		temp = temp->next;
	}
}

void deleteNode(int len){
	Node *temp = head;
	int pos = 1;
	while(temp != NULL){
		int len1 = strlen(temp->name);
		if(len == len1){
			if(head->next == NULL){
				free(head);
				head = NULL;
			}else if(pos == 1){
                                head = head->next;
                                free(head->prev);
                                head->prev = NULL; 
			}else{
				Node *temp2 = head;
				while(pos-2){
					temp2 = temp2->next;
					pos--;
				}
				
				temp->next = temp->next->next;
				free(temp->next->prev);
				temp->next->prev = temp;
			}	
			temp = temp->next;
			pos++;
		}
	}

}

void main(){
	int num;
	printf("Enter No Of Nodes : ");
	scanf("%d",&num);
	getchar();
	for(int i=1 ; i<=num ; i++){
		addNode();
	}
	printNode();

	int len;
	printf("Enter Length : ");
	scanf("%d",&len);
	deleteNode(len);

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node{
	char str[20];
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Name : ");
	char ch;
	int i=0;
	while((ch = getchar()) != '\n'){
		(*newNode).str[i++] = ch;
	}
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printNode(){
	if(head == NULL){
		printf("NODES NOT FOUND\n");
	}else{
		Node *temp = head;
		while(temp != NULL){
			printf("|%s|",temp->str);
			temp = temp->next;
		}
		printf("\n");
	}
}

void deleteNode(int len){
	Node *temp = head;
	int pos = 1;
	while(temp != NULL){
		int len1 = strlen(temp->str);
		if(len != len1){
			if(pos == 1){
				Node *temp = head;
				head = head->next;
				free(temp);
			}else if(head->next == NULL){
				free(head);
				head = NULL;
			}else{
				Node *temp2 = head;
				while(pos-2){
					temp2 = temp2->next;
					pos--;
				}
				Node *temp3 = temp2->next->next;
				free(temp2->next);
				temp2->next = temp3;
			}	
		}
		temp = temp->next;
		pos++;
	}
}

void main(){
	int no;
	printf("Enter No of Nodes : ");
	scanf("%d",&no);
	getchar();
	for(int i=0 ; i<no ; i++){
		addNode();
	}

	printNode();

	int len = 0;
	printf("Enter Length : ");
	scanf("%d",&len);

	deleteNode(len);

	printNode();
}

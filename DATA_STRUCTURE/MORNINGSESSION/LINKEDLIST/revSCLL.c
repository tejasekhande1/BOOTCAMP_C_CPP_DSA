#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *head = NULL;
Node *tail = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : \n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
		head->next = head;
	}else{
		Node* temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
	}

	tail = newNode;
}

void addLast(){
	addNode();
}

void addFirst(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		Node* temp = head;
		while(temp->next != head){
			temp=temp->next;
		}
		temp->next = newNode;
		head = newNode;
	}
}

int countNode(){
	int count = 0 ;
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else{
		Node* temp = head;
		do{
			temp = temp->next;
			count++;
		}while(temp!=head);
	}

	return count;
}

void printNode(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else{
		Node* temp = head;
		do{
			if(temp->next != head){
				printf("|%d|->",temp->data);
			}else{
				printf("|%d|\n",temp->data);
			}
			temp = temp->next;
		}while(temp != head);
	}
}

Node* revSCLL(){
	if(head == NULL){
		return NULL;
	}else{
		if(head->next == head){
			return head;
		}else{
			Node* temp1 = head;
			Node* temp2 = NULL;
			Node* temp3 = NULL;
			while(temp2 != head){
				temp2 = temp1->next;
				temp1->next = temp3;
				temp3 = temp1;
				temp1 = temp2;
			}

			head->next = temp3;
			head = temp3;
			return head;
		}
	}
}

void main(){
	int noOfNodes;
	printf("Enter No of Nodes : \n");
	scanf("%d",&noOfNodes);
	
	for(int i=0 ; i<noOfNodes ; i++){
		addNode();
	}
	printNode();
	revSCLL();
	printNode();
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* head = NULL;
Node* lastNode = NULL;

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	int data;
	printf("Enter Data : ");
	scanf("%d",&data);
	Node* newNode = createNode(data);

	if(head == NULL){
		head = newNode;
	}else{
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = newNode;
	}

	lastNode = newNode;
}

int printNode(){
	if(head == NULL){
		return -1;
	}else{
		Node* temp = head;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}	
}

int countNode(){
	if(head == NULL){
		return 0;
	}else{
		int cnt = 0;
		Node* temp = head;
		while(temp!=NULL){
			cnt++;
			temp = temp->next;
		}
		return cnt;
	}
}

void sortNode(){

	int cnt = countNode();
	Node* temp = head;
	while(temp != lastNode){
		if(cnt-1 == 0){
			break;
		}

		if(temp->data > temp->next->data){
			int x = temp->data;
			temp->data = temp->next->data;
			temp->next->data = x;
		}

		if(temp->next == lastNode){
			lastNode = temp;
			temp = head;
			cnt--;
		}else{
			temp = temp->next;
		}
	}
}

void main(){
	int n=0;
	printf("Enter Number of Nodes in Linked List : ");
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++){
		addNode();
	}

	printNode();

	sortNode();

	printNode();
}

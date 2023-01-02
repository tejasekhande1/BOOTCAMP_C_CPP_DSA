#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->prev = NULL;
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
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
		newNode->prev = temp;
	}
}

void findOcc(int data){
	Node* temp = head;
	int pos = 1;
	int secOcc = 0; 
	int occ = 0;
	int count = 0;
	while(temp!=NULL){
	
		if(temp->data == data){
			count++;
			secOcc = occ;
			occ = pos;
		}

		temp = temp->next;
		pos++;
	}

	if(count == 0){
		printf("Element NOT Found\n");
	}else if(count == 1){
		printf("Element Found only one time\n");		
	}else{
		printf("Element FOUND at Position : %d\n",secOcc);
	}
}

void printNode(){
	Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("|%d|->",temp->data);
		}else{
			printf("|%d|\n",temp->data);
		}
		temp = temp->next;
	}
}

void main(){

	int num;
	printf("Enter No Of Nodes : ");
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		addNode();
	}
	printNode();

	int data;
	printf("Enter No to Find : ");
	scanf("%d",&data);

	findOcc(data);
}

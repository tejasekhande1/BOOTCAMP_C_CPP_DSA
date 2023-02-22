#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node* head = NULL;

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
		newNode->prev = head;
		newNode->next = head;
	}else{
		head->prev->next = newNode;
		newNode->prev = head->prev;
		newNode->next = head;
		head->prev = newNode;
	}
}

int countNode(){
	Node* temp = head;
	int count = 0;
	do{	
		count++;
		temp = temp->next;
	}while(temp!=head);
	return count;
}

void addFirst(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
		newNode->next = head;
		newNode->prev = head;
	}else{
		newNode->next = head;
		newNode->prev = head->prev;
		head->prev->next = newNode;
		head->prev = newNode;
		head = newNode;
	}
}

void addLast(){
	addNode();
}

int addAtPos(int pos){
	int cnt = countNode();
	if(pos<=0 || pos > cnt+1){
		printf("Wrong Position\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == cnt+1){
			addLast();
		}else{
			Node* newNode = createNode();
			Node* temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
		}
		return 0;
	}
}

void deleteFirst(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else if(head->next == head){
		free(head);
		head = NULL;
	}else{
		head->next->prev = head->prev;
		head = head->next;
		free(head->prev->next);
		head->prev->next = head;
	}
}

void deleteLast(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else if(head->next == head){
		free(head);
		head = NULL;
	}else{
		head->prev = head->prev->prev;
		free(head->prev->next);
		head->prev->next = head;
	}
}

int deleteAtPos(int pos){
	int cnt = countNode();
	if(pos <= 0 || pos > cnt){
		printf("Invalid Position\n");
		return -1;
	}else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == cnt){
			deleteLast();
		}else{
			Node* temp = head;
			while(pos-2){
				temp = temp->next;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}
		return 0;
	}
}

void printNode(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else{
		Node* temp = head;
		do{
			printf("|%d|",temp->data);
			temp = temp->next;
		}while(temp!=head);
		printf("\n");
	}
}

void main(){
	char ch;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.addLast\n");
		printf("5.deleteFirst\n");
		printf("6.deleteAtPos\n");
		printf("7.deleteLast\n");
		printf("8.printNode\n");

		int choice;
		printf("Enter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				addNode();
				break;
			case 2 :
				addFirst();
				break;
			case 3 :{
					int pos;
					printf("Enter Position : \n");
					scanf("%d",&pos);
					addAtPos(pos);
				}
				break;
			case 4 :
				addLast();
				break;
			case 5 :
				deleteFirst();
				break;
			case 6 :{
					int pos;
					printf("Enter Position : \n");
					scanf("%d",&pos);
					deleteAtPos(pos);
				}
				break;
			case 7 : 
				deleteLast();
				break;
			case 8 : 
				printNode();
				break;
			default :
				printf("Invalid Operation\n");
				break;
		}

		getchar();
		printf("Do you want to continue...?\n");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}

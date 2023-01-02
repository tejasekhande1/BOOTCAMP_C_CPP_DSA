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

void addAtPos(int pos){

	int count = countNode();

	if(pos <= 0 && pos > count+1){
		printf("Invalid Position\n");
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == count+1){
			addLast();
		}else{
			Node* newNode = createNode();
			Node* temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
}

void deleteFirst(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else if(head->next == head){
		free(head);
		head = NULL;
	}else{
	
		/*	Node* temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = head->next;
		temp = head;
		head = head->next;
		free(temp);*/
		
		Node* temp = head;
		head = head->next;
		free(temp);
		tail->next = head;
	}
}

void deleteLast(){
	if(head == NULL){
		printf("LinkedList Empty\n");
	}else if(head->next == head){
		free(head);
		head = NULL;
	}else{
		Node* temp = head;
		while(temp->next != tail){
			temp = temp->next; 
		}
		free(tail);
		tail = temp;
		temp->next = head;
	}
}

void deleteAtPos(int pos){
	int count = countNode();
	if(pos <= 0 && pos > count){
		printf("Invalid Position\n");
	}else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{
			Node *temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			Node *temp1 = temp->next->next;
			free(temp->next);
			temp->next = temp1;
		}
	}
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

void main(){
	char ch;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPosition\n");
		printf("4.addLast\n");
		printf("5.deleteFirst\n");
		printf("6.deleteAtPosition\n");
		printf("7.deleteLast\n");
		printf("8.countNode\n");
		printf("9.printNodes\n");

		int choice = 0;
		printf("Enter Choice : \n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :
				addNode();
				break;
			case 2 :
				addFirst();
				break;
			case 3 :
				{
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
			case 6 :
				{
					int pos1;
					printf("Enter Position : \n");
					scanf("%d",&pos1);
					deleteAtPos(pos1);	
				}
				break;
			case 7 :
				deleteLast();
				break;
			case 8 :{
				int cnt = countNode();
				printf("Total Nodes : %d\n",cnt);
				}
				break;
			case 9 :
				printNode();
				break;
			default :
				printf("Wrong Choice\n");
				return;
				break;
		}
		getchar();
		printf("Do you want to continue....?\n");
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

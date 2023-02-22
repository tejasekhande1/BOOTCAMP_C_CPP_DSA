
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode(){
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->prev = NULL;
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node *newNode = createNode();
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

void addFirst(){
	Node *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

int countNode(){
	int cnt = 0;
	Node *temp = head;
	while(temp != NULL){
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

void addLast(){
	addNode();
}

int addAtPos(int pos){
	int cnt = countNode();
	if(pos <= 0 || pos > cnt + 1){
		printf("Invalid Position\n");
		return -1;
	}else{	
		if(pos == 1){
			addFirst();
		}else if(pos == cnt+1){
			addLast();
		}else{
			Node *newNode = createNode();
			Node *temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			newNode->prev = temp;
			newNode->next->prev = newNode;
			temp->next = newNode;
		}
		return 0;
	}
}

void deleteFirst(){
	if(head == NULL){
		printf("NODES NOT FOUND\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}	
}

void deleteLast(){
	if(head == NULL){
		printf("NODES NOT FOUND\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
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
			Node *temp = head;
			Node *temp1 = NULL;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			temp1 = temp->next->next;
			free(temp->next);
			temp->next = temp1;
			temp1->prev = temp;
		}
		return 0 ;
	}
}

void printNode(){
	if(head == NULL){
		printf("NODE NOT AVAILABLE\n");
	}else{
		Node *temp = head;
		while(temp != NULL){
			if(temp->next != NULL){
				printf("|%p ",temp->prev);
				printf("%d ",temp->data);
				printf("%p|->",temp->next);
			}else{
				printf("|%p ",temp->prev);
				printf("%d ",temp->data);
				printf("%p|\n",temp->next);
			}
			temp = temp->next;
		}
	}
}

int revDLL(){
	if(head == NULL){
		printf("NODES NOT FOUND\n");
		return -1;
	}else{
		if(head->next == head){
			printf("ONLY ONE NODE PRESENT\n");
		}else{
			Node* temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}

			while(temp != NULL){
				if(temp->prev != NULL){
					printf("|%d|->",temp->data);
				}else{
					printf("|%d|\n",temp->data);
				}
				temp = temp->prev;
			}
		}

		return 0;
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
		printf("10.reverseList\n");

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
			case 10:
				revDLL();
				break;
			default :
				printf("Wrong Choice\n");
				return;
				break;
		}
		getchar();
		printf("Do you want to continue....?\n");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}

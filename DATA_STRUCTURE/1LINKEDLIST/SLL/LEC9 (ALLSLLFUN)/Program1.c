#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data : \n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	struct Node *newNode = createNode();
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

void addFirst(){
	struct Node *newNode = createNode();
	if(head == NULL){
		head == newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void addLast(){
	addNode();
}
int countNode(){
	struct Node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void addAtPos(int pos){
	int count = countNode();
	if(pos == count+1){
		addLast();
	}else if(pos == 1){
		addFirst();
	}else if(count > pos){
		struct Node *newNode = createNode();
		struct Node *temp = head;
		while(pos-2){
			temp = temp->next;
			pos--;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}else{
		printf("Invalid Input\n");
	}	
}

void printNode(){

	struct Node *temp = head;

	while(temp != NULL){
	
		if(temp->next != NULL){
			printf("|%d|->",temp->data);
		}else{
			printf("|%d|",temp->data);
		}

		temp = temp->next;
	}

	printf("\n");
}

void deleteFirst(){
	struct Node *temp = head;
	head = head->next;
	free(temp);
}

void deleteLast(){
	struct Node *temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void deleteAtPos(int pos){
	int count = countNode();
        if(pos == count){
                deleteLast();
        }else if(pos == 1){
                deleteFirst();
        }else if(count > pos){
		struct Node *temp = head;
               	while(pos-2){
			temp = temp->next;
		}
		struct Node *temp2 = temp->next->next;
		free(temp->next);
		temp->next = temp2;
        }else{
                printf("Invalid Input\n");
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
				break;
		}
		getchar();
		printf("Do you want to continue....?\n");
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

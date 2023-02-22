#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int flag = 0,size = 0;

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node* head = NULL;
Node* top = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

int countNode(){
	if(head == NULL){
		return 0;
	}else{
		struct Node *temp = head;
		int count = 0;
		while(temp != NULL){
			count++;
			temp=temp->next;
		}
		return count;
	}
}

bool isFull(){
	if(size == countNode()){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(countNode == 0){
		return true;
	}else{
		return false;
	}
}

int push(){
	if(isFull()){
		printf("Stack Overflow\n");
	}else{
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
		top = newNode;
		return 0;
	}
}

int pop(){
	if(isEmpty()){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{
		int ret;
		flag = 0;
		if(head->next == NULL){
			ret = head->data;
			free(head);
			head = NULL;
		}else{
			top = head;
			while(top->next->next != NULL){
				top = top->next;
			}
			ret = top->next->data;	
			free(top->next);
			top->next = NULL;
		}
		return ret;
	}
}

int peek(){
	if(head == NULL && top == 0){
		printf("Stack Underflow\n");
		return -1;
	}else{
		return top->data;
	}
}

void main(){

	printf("Enter Size of Stack : \n");
	scanf("%d",&size);
	int stack[size];

	char ch;
	do{
		printf("1.Push()\n");
		printf("2.Pop()\n");
		printf("3.Peek()\n");
		printf("4.Print()\n");

		int choice;
		printf("Enter Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				push(stack);
				break;
			case 2 :{
					int ret = pop();
					if(flag != 1){
						printf("Popped : %d\n",ret);
					}
				}
				break;
			case 3 :{
					int ret = peek();
					if(flag != 1){
						printf("Peek : %d\n",ret);
					}
				}
				break;
			default :
				printf("Wrong Choice\n");
				break;
		}
	
		getchar();
		printf("Do you want to continue...?\n");
		scanf("%c",&ch);	

	}while(ch == 'y' || ch == 'Y');
}

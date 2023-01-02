#include <stdio.h>
#include <stdlib.h>

int top = 0,flag=0,size = 0;

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node* head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

int push(){
	Node* newNode = createNode();
	if(size == top){
		printf("Stack Overflow\n");
	}else{
		if(head == NULL){
			head = newNode;
		}else{
			Node* temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
		}
		top++;
		return 0;
	}
}

int pop(){
	if(head == NULL){
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
			Node*temp = head;
			while(temp->next->next != NULL){
				temp = temp->next;
			}	
			ret = temp->next->data;
			free(temp->next);
			temp->next = NULL;
		}
		top--;
		return ret;
	}
}

int peek(){
	if(head == NULL && top == 0){
		printf("Stack Underflow\n");
		return -1;
	}else{
		int ret;
		if(head->next == NULL){
			ret = head->data;
		}else{
			Node* temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			ret = temp->data; 
		}
		return ret;
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

#include <stdio.h>
#include <stdlib.h>

int size = 0,flag = 0;

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* front = NULL;
Node* rear = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

int countNode(){
	
	int cnt = 0;
	if(front == NULL){
		return 0;
	}else{
		Node* temp = front;
/*		do{
			cnt++;
			temp = temp->next;
		}while(temp != front); */

		while(temp->next != front){
			cnt++;
			temp = temp->next;
		}
		return cnt+1;
	}
}

int enqueue(){
	int cnt = countNode();
	if(cnt == size){
		return -1;
	}else{
		Node* newNode = createNode();
		if(front == NULL){
			front = newNode;
			rear = newNode;
			newNode->next=front;
		}else{
			rear->next = newNode;
			newNode->next = front;
			rear = newNode;
		}
		return 0;
	}
}

int dequeue(){
	if(front == NULL){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		int ret = front->data;
		if(front->next == front){
			front = NULL;
			rear = NULL;
		}else{
			front = front->next;
			free(rear->next);
			rear->next = front;
		}
		return ret;
	}
}

int frontt(){
	if(front == NULL){
		flag = 0;
		return -1;
	}else{	
		flag = 1;
		return front->data;
	}
}

int printQueue(){
	if(front == NULL){
		return -1;
	}else{
		Node* temp = front;
		do{
			printf("|%d|\n",temp->data);
			temp = temp->next;
		}while(temp!=front);
		return 0;
	}
}

void main(){

	printf("Enter Size of Queue :\n");
	scanf("%d",&size);

	char ch;
	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Front\n");
		printf("4.PrintQueue\n");

		int choice;
		printf("Enter Choice : \n");
		scanf("%d",&choice);

		int ret = 0;
		switch(choice){
			case 1 :{
				ret = enqueue();
				if(ret == -1)
					printf("Queue Full\n");
				}
				break;
			case 2 :{
				ret = dequeue();
				if(flag == 1)
					printf("Dequeued : %d\n",ret);
				else
					printf("Queue Empty\n");
				}
				break;

			case 3 :{
				ret = frontt();
				if(flag == 1)
					printf("Front : %d\n",ret);
				else
					printf("Queue Empty\n");
				}
				break;
		
			case 4 :
				printQueue();
				break;
			default:
				printf("Wrong Choice\n");
				break;
		}

		getchar();
		printf("Do you want to continue...?\n");
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

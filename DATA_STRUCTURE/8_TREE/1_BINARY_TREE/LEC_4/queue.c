#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
	int data;
	struct Queue *next;
}Queue;

Queue* front = NULL;
Queue* rear = NULL;

void Enqueue(){
	Queue* newNode = (Queue*)malloc(sizeof(Queue));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	newNode->next = NULL;

	if(front == NULL && rear == NULL){
		front = newNode;
		rear = newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}
}

void Dequeue(){
	if(front == NULL && rear == NULL){
		printf("Queue is Empty\n");
		return;
	}else if(front == rear){	
		printf("Removed Data : %d\n",front->data);
		front = NULL;
		rear = NULL;
	}else{
		Queue* temp = front;
		printf("Removed Data : %d\n",temp->data);
		front = front->next;
		free(temp);
	}
}

void printQueue(){
	Queue* temp = front;
	while(temp != NULL){
		printf(" %d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void main(){
	char ch;
	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Print\n");

		int choice;
		printf("Enter Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				Enqueue();
				break;
			case 2 :
				Dequeue();
				break;
			case 3 :
				printQueue();
				break;
		}

		printf("Do want to continue ? ");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *front = NULL,*rear = NULL;
int flag = 0;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL){
		printf("Memory Full\n");
		exit(0);
	}	
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

int enqueue(){

	Node* newNode = createNode();
	if(front == NULL){
		front = newNode;
		rear = newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}

	return 0;
}

int dequeue(){
	if(front == NULL){
		flag = 0;
		return -1;
	}else{
		int ret = front->data;
		flag = 1;
		Node* temp = front;
		front = front->next;
		free(temp);
		return ret;
	}

}

int printQueue(){
	if(front == NULL){
		return -1;
	}else{	
		Node* temp = front;
		do{
			printf("|%d|",temp->data);
			temp = temp->next;
		}while(temp!=NULL);
		return 0;
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

void main(){
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

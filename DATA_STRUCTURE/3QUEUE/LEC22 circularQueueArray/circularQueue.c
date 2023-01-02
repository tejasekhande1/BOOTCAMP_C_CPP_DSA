#include <stdio.h>

int size = 0;
int front = -1;
int rear = -1;
int flag = 0;

int enqueue(int queue[]){
	if(front == -1 && rear == -1){
		front++;
		rear++;
		printf("Enter Data : ");
		scanf("%d",&queue[rear]);
		return 0;
	}else if((rear == size-1 && front == 0) || rear == front-1){
		return -1;
	}else{
		if(rear == size-1 && front != 0){
			rear = -1;
		}
		rear++;
		printf("Enter Data : ");
		scanf("%d",&queue[rear]);
		return 0;
	}
}

int dequeue(int queue[]){
	if(front == -1 && rear == -1){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		int ret = queue[front];

		if(front == rear){
			rear = -1;
			front = -1;
		}else{
			if(front == size-1){
				front = -1;
			}

			front++;
		}

		return ret;
	}
}

void printQueue(int queue[]){

	if(front == -1){
		printf("Queue is Empty\n");
		return;
	}else{
		int i;
		for(int i=front ; i != rear ; i=(i+1) % size){
			printf("|%d|",queue[i]);
		}
			printf("|%d|",queue[rear]);

		printf("\n");
	}
}

int frontt(int queue[]){
	if(front == -1){
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return queue[front];
	}
}

void main(){
	printf("Enter Size of Array :\n");
	scanf("%d",&size);
	int queue[size];
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
				ret = enqueue(queue);
				if(ret == -1)
					printf("Queue Full\n");
				}
				break;
			case 2 :{
				ret = dequeue(queue);
				if(flag == 1)
					printf("Dequeued : %d\n",ret);
				else
					printf("Queue Empty\n");
				}
				break;

			case 3 :{
				ret = frontt(queue);
				if(flag == 1)
					printf("Front : %d\n",ret);
				else
					printf("Queue Empty\n");
				}
				break;
		
			case 4 :
				printQueue(queue);
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

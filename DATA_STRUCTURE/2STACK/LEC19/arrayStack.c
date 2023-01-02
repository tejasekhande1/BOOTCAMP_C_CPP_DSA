#include <stdio.h>
#include <stdbool.h>

int size,top=-1,flag=0;

bool isEmpty(){
	if(top == -1){
		return true;
	}

	return false;
}

bool isFull(){
	if(top == size-1){
		return true;
	}

	return false;
}

int push(int stack[]){
	if(isFull()){
		return -1;
	}else{
		top++;
		printf("Enter Data : ");
		scanf("%d",&stack[top]);
		return 0;
	}
}

int pop(int stack[]){
	if(isEmpty()){
		flag = 1;
		return -1;
	}else{
		int ret = stack[top];
		flag = 0;
		top--;
		return ret;
	}
}

int peek(int stack[]){
	if(top == -1){
		return -1;
	}else{
		return stack[top];
	}
}

void main(){
	printf("Enter Size of Stack : ");
	scanf("%d",&size);

	int stack[size];

	char ch;
	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");

		int choice;
		printf("Enter Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 : {
					int ret = push(stack);
					if(ret == -1)
						printf("Stack Overflow\n");
				 }
				 break;
			case 2 : {
					int ret = pop(stack);
					if(flag == 1)
						printf("Stack Underflow\n");
					else
						printf("Popped : %d\n",ret);
				 }
				 break;
			case 3 : {
					int ret = peek(stack);
					if(top == -1)
						printf("Stack Underflow\n");
					else
						printf("Peek : %d\n",ret);
				 }
				 break;
			default : 
				 printf("WrongChoice\n");
				 break;
		}
			getchar();
			printf("Do you want to continue...?\n");
			scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

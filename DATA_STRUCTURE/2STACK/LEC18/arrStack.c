#include <stdio.h>

int top = -1,flag=0,size = 0;

int push(int *stack){
	if(top == size-1){
		printf("Stack Overflow\n");
		return -1;
	}else{
		top++;
		scanf("%d",(stack+top));
		return 0;
	}
}

int pop(int *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{
		int ret = *(stack+top);
		top--;
		flag = 0;
		return ret;
	}
}

int peek(int *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{
		flag = 0;
		return *(stack+top);
	}
}

void printStack(int *stack){
	if(top == -1){
		printf("Stack Underflow");
	}else{
		for(int i=top ; i>=0 ; i--){
			printf("|%d|\n",*(stack+i));
		}
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
					int ret = pop(stack);
					if(flag != 1){
						printf("Popped : %d\n",ret);
					}
				}
				break;
			case 3 :{
					int ret = peek(stack);
					if(flag != 1){
						printf("Peek : %d\n",ret);
					}
				}
				break;
			case 4 :
				printStack(stack);
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

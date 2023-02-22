#include <stdio.h>

int top1,top2;
int flag=0;
int size = 0;
int choice = 0;

int push(int stack[]){
	if(top1 == top2-1){
		return -1;
	}else{
		if(choice == 1){
			top1++;
			printf("Enter Data : \n");
			scanf("%d",&stack[top1]);
		}

		if(choice == 2){
			top2--;
			printf("Enter Data : \n");
			scanf("%d",&stack[top2]);			
		}
		return 0;
	}
}

int pop(int stack[]){
	if(top1 == -1 || top2 == size){
		flag = 1;
		return -1;
	}else{
		int ret = 0;
		flag = 0;
		if(choice == 3){
			ret = stack[top1];
			top1--;
		}

		if(choice == 4){
			ret = stack[top2];
			top2++;
		}
		return ret;
	}
}

int printStack(int stack[]){
	if(top1 == -1 && top2 == size-1){
		return -1;
	}else{
	 	int ch;
		printf("Enter Stack Number (1 or 2): \n");
		scanf("%d",&ch);

		if(ch == 1){
			for(int i=top1 ; i>=0 ; i--){
				printf("|%d|\n",stack[i]);
			}
			printf("\n");
		}else if(ch == 2){
			for(int i=size-1 ; i>=top2 ; i--){
				printf("|%d|\n",stack[i]);
			}
			printf("\n");

		}else{
			printf("Wrong Choice\n");
		}
		return 0;
	}
}

void main(){
	printf("Enter Size of Array :\n");
	scanf("%d",&size);
	int stack[size];

	top1 = -1;
	top2 = size;
	char ch;
	do{
		printf("1.Push1\n");
		printf("2.Push2\n");
		printf("3.Pop1\n");
		printf("4.Pop2\n");
		printf("5.PrintStack\n");

		printf("Enter Choice : \n");
		scanf("%d",&choice);

		int ret = 0;
		switch(choice){
			case 1 :{
				ret = push(stack);
				if(ret == -1)
					printf("Stack-1 OverFlow\n");
			       }
			       break;
			case 2 :{
				ret = push(stack);
				if(ret == -1)
					printf("Stack-2 OverFlow\n");
			       }
			       break;
			case 3 :{
				ret = pop(stack);
				if(flag == 1){
					printf("Stack 1 Underflow\n");
				}else{
					printf("Popped From 1 : %d\n",ret);
				}
			       }
			       break;
			case 4 :{
				ret = pop(stack);
				if(flag == 1){
					printf("Stack 2 Underflow\n");
				}else{
					printf("Popped From 2 : %d\n",ret);
				}	
			       break;
			       }
			case 5 :
				{
				ret = printStack(stack);
				if(ret == -1){
					printf("Stack Underflow\n");
				}
				break;
				}
			default:
				printf("Wrong Choice\n");
				break;
		}

		getchar();
		printf("Do you want to continue...?\n");
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
}

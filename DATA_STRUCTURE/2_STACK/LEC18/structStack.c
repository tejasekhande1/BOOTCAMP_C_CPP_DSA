#include <stdio.h>
#include <string.h>

int top=-1,flag=0,size=0;

typedef struct OTT{
	char pName[20];
	float subPrize;
	int noOfMonths;
}OTT;

int push(OTT *stack){
	if(top == size-1){
		printf("Stack Overflow\n");
		return -1;
	}else{
		top++;

		struct OTT obj;
		printf("Enter Name of Platform : ");

		char ch;
		int i=0;
		getchar();
		while((ch = getchar())!= '\n'){
			obj.pName[i++] = ch;
		}
		printf("Enter Subscription Prize : ");
		scanf("%f",&obj.subPrize);
		printf("No of Months Plan : ");
		scanf("%d",&obj.noOfMonths);
	
		stack[top] = obj;
	}
}

int printStack(OTT *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		return -1;
	}else{
		for(int i=top ; i>=0 ; i--){
			printf("| %s ",stack[i].pName);
			printf("%0.2f ",stack[i].subPrize);
			printf("%d|\n ",stack[i].noOfMonths);
		}
		return 0;
	}
}

int pop(OTT *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{
		int i = top;
		top--;
		flag = 0;
		return i;
	}
}

int peek(OTT *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{		
		flag = 0;
		return top;
	}
}

void main(){
	printf("Enter Size of Stack : ");
	scanf("%d",&size);

	OTT stack[size];
	char ch;
	do{
		printf("1.Push()\n");
		printf("2.Pop()\n");
		printf("3.Peek()\n");
		printf("4.PrintStack()\n");

		int choice;
		printf("Enter Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				push(stack);
				break;
			case 2 :{
					int i = pop(stack);
					if(flag != 1){
						printf("Popped : \n");
						printf("| %s ",stack[i].pName);
						printf(" %f ",stack[i].subPrize);
						printf(" %d|\n ",stack[i].noOfMonths);
					}
				}
				break;
			case 3 :{
					int i = peek(stack);
					if(flag != 1){
						printf("Peek : \n");
						printf("| %s ",stack[i].pName);
						printf(" %f ",stack[i].subPrize);
						printf(" %d|\n ",stack[i].noOfMonths);
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

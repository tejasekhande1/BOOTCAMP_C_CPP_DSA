

// PROGRAM TO CHECK GREATEST NO AMONG 2 NUMBERS 

#include <stdio.h>
void main(){
	int fNo,sNo;
	printf("Enter First No : \n");
	scanf("%d",&fNo);
	printf("Enter Second No : \n");
	scanf("%d",&sNo);

	if(fNo > sNo){
		printf("Greater No is : %d\n",fNo);
	}else if(sNo > fNo){
		printf("Greater No is : %d\n",sNo);
	}else if(fNo == sNo){
		printf("Both Numbers are Same\n");
	}else{
		printf("Wrong Input\n");
	}
}


// TO CHECK SMALLEST NO AMONG 2 NUMBERS

#include <stdio.h>
void main(){
	int fNo,sNo;
	printf("Enter First No : \n");
	scanf("%d",&fNo);
	printf("Enter Second No : \n");
	scanf("%d",&sNo);

	if(fNo < sNo){
		printf("Smallest No is : %d\n",fNo);
	}else if(fNo > sNo){
		printf("Smallest No is : %d\n",sNo);
	}else if(fNo == sNo){
		printf("Both Numbers are SAME\n");
	}else{
		printf("Wrong I/P\n");
	}
}

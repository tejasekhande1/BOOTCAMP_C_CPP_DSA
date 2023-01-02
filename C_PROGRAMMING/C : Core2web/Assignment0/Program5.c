#include <stdio.h>
void main(){
	int num;
	printf("Enter Number : \n");
	scanf("%d",&num);

	if( num % 5 == 0 && num % 11 == 0){
		printf("%d is Divisible by 5 & 11.\n",num);
	}else{
		printf("%d is NOT Divisible by 5 & 11.\n",num);
	}
}

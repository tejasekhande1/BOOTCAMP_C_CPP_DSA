#include <stdio.h>
void main(){
	int num;
	printf("Enter Number : \n");
	scanf("%d",&num);

	if( num % 2 == 0){
		printf("%d is EVEN Number.\n",num);
	}else{
		printf("%d is ODD Number.\n",num);
	}
}

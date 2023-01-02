#include <stdio.h>
void main(){
	int num;
	printf("Enter Number : \n");
	scanf("%d",&num);

	if( num > 10 ){
		printf("%d is GREATER than 10.\n",num);
	}else{
		printf("%d is LESS than 10.\n",num);
	}
}

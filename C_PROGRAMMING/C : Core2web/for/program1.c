#include <stdio.h>

void main(){

	int x;
	printf("Enter number:");
	scanf("%d",&x);

	if(x != 0){

		if(x % 3 == 0){
			printf("%d is multiply by 3\n",x);
		} else {
			printf("%dis not mutiply by 3\n",x);
		}
	}
}

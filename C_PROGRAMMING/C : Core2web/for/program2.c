#include <stdio.h>

void main(){

	int x;

	printf("Enter value:");
	scanf("%d",&x);

	if(x % 2 == 0){
		printf("%d\n",x);
	} else {
		printf("it not a even value\n");
	}
}

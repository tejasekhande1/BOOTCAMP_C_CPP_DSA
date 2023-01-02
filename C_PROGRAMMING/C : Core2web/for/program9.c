#include <stdio.h>

void main(){

	int x,y;

	printf("Enter num:");
	scanf("%d",&x);

	printf("Enter num:");
	scanf("%d",&y);

	for(int i = x; i <= y; i++){

		printf("%d\n",x*x);
		x++;
	}
}

#include <stdio.h>

void main(){

        int x,y;

	printf("Enter num:");
	scanf("%d",&x);

	printf("Enter num:");
	scanf("%d",&y);

	for(float i = x; i <= y; i++){
		float x1 = 1/i;
		printf("%f=%f\n",i,x1);
	}
}

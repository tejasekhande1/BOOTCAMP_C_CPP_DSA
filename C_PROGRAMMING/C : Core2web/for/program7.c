#include <stdio.h>

void main(){

	int x, y,cunt;

	printf("Enter num:");
	scanf("%d",&x);

	printf("Enter num:");
	scanf("%d",&y);

	for(int i = 1; i <= x; i++){
		if(i % x == 0){
			printf("%d\n",i);
		}
	}
}

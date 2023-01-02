#include <stdio.h>

void main(){

	int x;
	printf("Enter no:");
	scanf("%d",&x);

	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			printf("%d\n",i);
		}
	}
}

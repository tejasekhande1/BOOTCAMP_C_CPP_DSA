#include <stdio.h>

void main(){

	int rows;
	int x = 1;
	int sum = 2;

	printf("Enter number:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= 3; j++){
			printf("%d ",sum);
			sum = sum+1+2*x;
			x++;
		}
		printf("\n");
	}
}

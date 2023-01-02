#include <stdio.h>

void main(){

	int rows;
	int x =1;

	printf("Enter no of rows:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= 4; j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
		x = x - 3;
	}
}

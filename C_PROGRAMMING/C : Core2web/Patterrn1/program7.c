#include <stdio.h>

void main(){

	int rows;
	int x = 1;

	printf("Enter no of rows:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= 4; j++){
			if(x % 2 == 0){
				printf("%d ",x);
			} else {
				printf("%d ",x*x);
			}
			x++;
		}
		printf("\n");
	}
}

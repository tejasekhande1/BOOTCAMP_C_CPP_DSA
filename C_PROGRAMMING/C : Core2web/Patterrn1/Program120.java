#include <stdio.h>

void main(){

	int rows = 0;
	int x = 1;

	printf("Enter on of rows:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= 3; j++){
			printf("%d ",x);
				x = x+2;
		}
		printf("\n");	
	}
}



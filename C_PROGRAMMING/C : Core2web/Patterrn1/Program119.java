#include <stdio.h>

void main(){

	int rows;

	printf("Enter num:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		int x = 4;
		char ch = 'D';

		for(int j = 1; j <= 4; j++){
			printf("%c%d ",ch,x);
			x--;
			ch--;
		}
		printf("\n");
	}
}

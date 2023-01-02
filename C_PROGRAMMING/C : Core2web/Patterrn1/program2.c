#include <stdio.h>

void main(){

	int rows;

	printf("Enter rows:");
	scanf("%d",&rows);

	for(int i = 1; i <= rows; i++){
		int x =1;
		char ch = 'a';
		for(int j = 1; j <= 3; j++){
			if(i % 2 == 0){
				printf("%c ",ch);
				ch++;
				
			} else {
				
				printf("%d ",x);
				x++;
			}	
		}
		printf("\n");
	}
}

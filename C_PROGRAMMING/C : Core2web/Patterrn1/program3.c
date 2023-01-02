#include <stdio.h>

void main(){

	int x = 1,rows;
	 printf("Enter no of rows:");
	 scanf("%d",&rows);

	 for(int i = 1; i <= rows; i++){
		 for(int j = 1; j <= 4; j++){
			 printf("%d ",x);
		 }
		 printf("\n");
		 x++;
	 }

}

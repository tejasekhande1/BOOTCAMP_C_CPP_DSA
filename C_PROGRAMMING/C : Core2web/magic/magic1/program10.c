/*
 D D D D
   C C C
     B B 
       A
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);
	char ch = 64 + row;
	for(int i=1;i<=row;i++){
		for(int space=1;space<i;space++){
			printf("  ");
		}for(int j=i;j<=row;j++){
			printf("%c ",ch);
		}printf("\n");
		ch--;
	}
}

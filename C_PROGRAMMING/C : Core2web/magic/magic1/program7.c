/*
 E D C B A
 E D C B
 E D C
 E D
 E
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		char ch1 = 64 + row;
		for(int j=1;j>=i;j++){
			printf("%c ",ch1);
			ch1--;
		}printf("\n");
	}
}

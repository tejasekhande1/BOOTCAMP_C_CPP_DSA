/*
 				1
			1	2
		1	2	3
	1	2	3	4
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int num = 1;
		for(int space=i;space<row;space++){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

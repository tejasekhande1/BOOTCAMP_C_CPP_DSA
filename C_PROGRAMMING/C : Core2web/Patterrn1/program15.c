#include<stdio.h>
void main(){
	int row,num;
	printf("Enter rows\n");
	scanf("%d",&row);
	num=row;
	for(int i=1;i<=row;i++){
		
		for(int j=num+64;j>=65;j--){
			printf("%c%d\t",j,row);
			row--;
		}
		printf("\n");
		row=num;
	}
}

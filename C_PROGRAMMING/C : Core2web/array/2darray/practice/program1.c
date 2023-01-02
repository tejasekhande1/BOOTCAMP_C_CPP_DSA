//create an 2d array and print it. 
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the row and col count\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("Enter the elements of the array\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

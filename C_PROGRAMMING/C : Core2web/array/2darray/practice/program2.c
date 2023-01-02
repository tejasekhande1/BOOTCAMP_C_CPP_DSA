//create an array and enter the elements from the user and make the addtion of the elements and display it..
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the number of row and columns \n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	int sum = 0;
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
			sum = sum + arr[i][j];
		}printf("\n");
	}
	printf("The sum is %d\n",sum);
}

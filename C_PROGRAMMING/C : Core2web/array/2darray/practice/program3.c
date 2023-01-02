#include<stdio.h>
void main(){
	int row,col;
	printf("Enter the row and col\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	int sum = 0;
	printf("Enter the array elements\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
			if(i==j){
				sum = sum + arr[i][j];
			}
		}
		printf("\n");
	}printf("The sum of the array is %d\n",sum);
}

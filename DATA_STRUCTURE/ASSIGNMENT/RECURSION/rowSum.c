
#include <stdio.h>

int sum = 0;
int row = 3,col=3;

int rowSum(int arr[row][col],int i,int j){
	if(i >= row && j >=col){
		return 0;
	}

	if(j >= col){
		i = i+1;
		j = -1;
		printf("Row %d : %d\n",i-1,sum);
		sum = 0;
	}
	
	if(j >= 0)
		sum = sum + arr[i][j];
	
	return rowSum(arr,i,j+1);
}

void main(){
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i=0,j=0;
	rowSum(arr,i,j);
}

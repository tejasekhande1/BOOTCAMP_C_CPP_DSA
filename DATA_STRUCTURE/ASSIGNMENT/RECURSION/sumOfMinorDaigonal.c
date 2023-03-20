
#include <stdio.h>

int n = 3;

int sumOfDaigonal(int arr[n][n],int i,int j){

	if(i >= n && j>=n){
		return 0;
	}

	if(j>=n){
		i = i+1;
		j = 0;
	}

	if(i+j == n-1)
		return arr[i][j] + sumOfDaigonal(arr,i,j+1);
	else
		return sumOfDaigonal(arr,i,j+1);
}

void main(){
	int arr[][3]={{3,3,1},{-2,-3,-4},{5,-6,-7}};
	int i=0,j=0;
	int ret = sumOfDaigonal(arr,i,j);
	printf("Sum of Minor Daigonal = %d\n",ret);
}

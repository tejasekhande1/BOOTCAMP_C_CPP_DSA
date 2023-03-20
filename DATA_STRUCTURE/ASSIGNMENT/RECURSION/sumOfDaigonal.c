#include <stdio.h>
int n = 3;

int sumOfDaigonal(int arr[n][n],int i){
	if(i >= n ){
		return 0;
	}

	return arr[i][i] + sumOfDaigonal(arr,i+1);
}

void main(){
	int arr[][3]={{1,2,3},{1,2,3},{1,2,3}};
	int i=0,j=0;
	int ret = sumOfDaigonal(arr,i);
	printf("Sum of Daigonal = %d\n",ret);
}

#include <stdio.h>

void minorDaigonal(int arr[][3],int n,int* newArr){
	for(int i=0 ; i<n ; i++){	
		int sum = 0;
		for(int j=0 ; j<n ; j++){
			sum = sum + arr[i][j];
		}
		*(newArr+i) = sum;
	}
}

void main(){
	int n = 3;
	int newArr[3];
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	minorDaigonal(arr,n,newArr);
	for(int i=0 ; i<n ; i++){
		printf("%d\n",newArr[i]);
	}
}

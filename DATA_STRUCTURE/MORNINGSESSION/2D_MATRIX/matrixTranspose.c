#include <stdio.h>

void mainDaigonal(int arr[][3],int n,int** newArr){
	int sum = 0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			*(*(arr+j)+i) = arr[i][j];
		}
	}
}

void main(){
	int n = 3;
	int newArr[3][3];
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	mainDaigonal(arr,n,newArr);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf(" %d ",newArr[i][j]);
		}
		printf("\n");
	}
}

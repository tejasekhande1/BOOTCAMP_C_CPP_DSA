#include <stdio.h>

void minorDaigonal(int arr[][3],int n){
	int sum = 0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i+j == n-1){
				sum = sum + arr[i][j];
			}
		}
	}
	printf("Sum of Minor Daigonal : %d\n",sum);
}

void main(){
	int n = 3;
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	minorDaigonal(arr,n);
}

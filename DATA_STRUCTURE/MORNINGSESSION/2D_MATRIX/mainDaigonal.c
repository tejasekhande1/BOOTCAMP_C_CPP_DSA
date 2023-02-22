#include <stdio.h>

void mainDaigonal(int arr[][3],int n){
	int sum = 0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i==j){
				sum = sum + arr[i][j];
			}
		}
	}
	printf("Sum of Main Daigonal : %d\n",sum);
}

void main(){
	int n = 3;
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	mainDaigonal(arr,n);
}

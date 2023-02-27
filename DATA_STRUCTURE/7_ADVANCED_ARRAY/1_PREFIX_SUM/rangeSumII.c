// ARRAY,SUM,QUERIES THEN USED PREFIX ARRAY SUM

#include <stdio.h>
void rangeSum(int arr[],int n,int mat[][2],int row){
	for(int i=1 ; i<n ; i++){
		arr[i] = arr[i-1] + arr[i];
	}

	int start,end;
	int newArr[n];
	int k = 0;
	for(int i=0 ; i<row ; i++){
		start = mat[i][0];
		end = mat[i][1];
		if(start == 0){
			newArr[k++] = arr[end];
		}else{
			newArr[k++] = arr[end]-arr[start-1];
		}
	}

	for(int i=0 ; i<k ; i++){
		printf("|%d|",newArr[i]);
	}

	printf("\n");
}
void main(){
	int arr[] = {2,2,2};
	int n = 3;
	int mat[][2] = {{0,0},{1,2}};
	int row = 2;
	rangeSum(arr,n,mat,row);
}

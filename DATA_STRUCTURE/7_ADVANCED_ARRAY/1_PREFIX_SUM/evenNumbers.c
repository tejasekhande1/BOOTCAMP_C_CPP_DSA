#include <stdio.h>
void evenSum(int arr[],int n,int mat[][2],int row){
	int newArray[n];
	int k=0;
	for(int i=0 ; i<row ; i++){
		int s = mat[i][0];
		int e = mat[i][1];
		printf("%d\n",mat[i][0]);
		printf("%d\n",mat[i][1]);
		int cnt = 0;
		for(int i=s ; i<=e ; i++){
			if(arr[i]%2 == 0){
				cnt++;
			}
		}
		newArray[k++] = cnt;
	}
	for(int i=0 ; i<k ; i++){
		printf("|%d|",newArray[i]);
	}
	printf("\n");
}
void main(){
	int arr[] = {1,2,3,4,5};
	int mat[][2] = {{0,2},{2,4},{1,4}};
	int n = 5;
	int row = 3;
	evenSum(arr,n,mat,row);
}

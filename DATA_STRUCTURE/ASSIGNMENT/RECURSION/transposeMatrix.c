#include <stdio.h>

int row = 3,col = 3;
int transposeMatrix(int arr[row][col],int i,int j){
	if(i>= row && j >= col) return 0;

	if(j >= col){
		i = i+1;
		j = i+1;
	}

	int temp = arr[i][j];
	arr[i][j] = arr[j][i];
	arr[j][i] = temp;

	return transposeMatrix(arr,i,j+1);
}

void main(){
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i=0,j=i+1;
	transposeMatrix(arr,i,j);
	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j<col ; j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
}

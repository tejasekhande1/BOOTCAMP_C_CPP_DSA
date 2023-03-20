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

int rotateMatrix(int arr[][col],int s,int e,int i){
	if(i >= row) return 0;

	if(s > e){
		i = i+1;
		return rotateMatrix(arr,0,col-1,i);	
	}else{
		int temp = arr[i][e];
		arr[i][e] = arr[i][s];
		arr[i][s] = temp;
		return rotateMatrix(arr,s+1,e-1,i);	
	}
}

void main(){
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i=0,j=i+1;

	transposeMatrix(arr,i,j);

	int s = 0 , e = col-1;
	i = 0;

	rotateMatrix(arr,s,e,i);

	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j<col ; j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
}

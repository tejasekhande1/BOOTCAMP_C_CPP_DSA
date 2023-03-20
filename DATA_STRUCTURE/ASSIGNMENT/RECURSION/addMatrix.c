#include <stdio.h>

int n = 3;
int addMatrix(int arr1[][n],int arr2[][n],int i,int j){

	if(j>=n){
		j=-1;
		i = i+1;
	}

	if(i>=n){
		return 0;
	}

	arr1[i][j] += arr2[i][j];
	
	return addMatrix(arr1,arr2,i,j+1);
}

void main(){
	int arr1[][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int arr2[][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int i=0,j=0;
	int ret = addMatrix(arr1,arr2,i,j);
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf(" %d ",arr1[i][j]);
		}
		printf("\n");
	}
}

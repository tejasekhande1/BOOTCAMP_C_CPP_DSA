#include <stdio.h>

int n = 3;
int isEqual(int arr1[][n],int arr2[][n],int i,int j){
	
	if(j>=n){
		j=-1;
		i = i+1;
	}
	
	if(i>=n){
		return 1;
	}

	if(arr1[i][j] != arr2[i][j]){
		return 0;
	}
	
	return isEqual(arr1,arr2,i,j+1);
}

void main(){
	int arr1[][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int arr2[][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int i=0,j=0;
	int ret = isEqual(arr1,arr2,i,j);
	printf("Result : %d\n",ret);
}

#include<stdio.h>

int rotateArray(int arr[],int n,int B,int i,int j,int last){

	if(i >= B ) return 0;

	if(j < 0){
		j = n;
		i = i+1;
		arr[0] = last;
		last = arr[n];
	}

	if(i<B)
		arr[j] = arr[j-1];

	return rotateArray(arr,n,B,i,j-1,last);
}

void main(){
	int arr[] = {1,2,3,4};
	int n = 4;
	int B = 2;
	int i = 0;
	int j = n-1;
	int last = arr[j];
	rotateArray(arr,n-1,B,i,j,last);
	for(int i=0 ; i<n ; i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}

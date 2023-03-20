#include <stdio.h>

int n=5;
int row = 3;
int col = 2;
int retArray[5];

int cntElement(int arr[],int s,int e){

	if(s>e) return 0;

	if(arr[s] % 2 == 0) 
		return 1 + cntElement(arr,s+1,e);		
	else
		return cntElement(arr,s+1,e);
}

int evenNum(int arr[],int range[row][col],int i){

	if(i >= row) return 0;

	int s = range[i][0];
	int e = range[i][1];

	retArray[i] = cntElement(arr,s,e);

	return evenNum(arr,range,i+1);
}

void main(){
	int arr[] = {1,2,3,4,5};
	int range[][2] = {{0,2},{1,4},{0,4}};
	int i=0 ; 
	evenNum(arr,range,i);
	for(int i=0 ; i<row ; i++){
		printf(" %d ",retArray[i]);
	}
	printf("\n");
}

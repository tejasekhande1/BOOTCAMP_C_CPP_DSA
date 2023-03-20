#include <stdio.h>

int n=4;
int productStart[4];
int productEnd[4];

int prodStart(int arr[],int n,int i){
	if(i>=n) return 0;
	productStart[i] = productStart[i-1]*arr[i];
	return prodStart(arr,n,i+1);
}

int prodEnd(int arr[],int n,int i){
	if(i<n) return 0;
	productEnd[i] = productEnd[i+1]*arr[i];
	return prodEnd(arr,n,i-1);
}

int puzzleArray(int arr[],int i,int ret[]){
	if(i >= n-1) return 0;
	ret[i] = productStart[i-1]*productEnd[i+1];
	return puzzleArray(arr,i+1,ret);
}

void main(){
	int arr[] = {1,2,3,4};
	int retArray[4];

	productStart[0] = arr[0];
	prodStart(arr,n,1);	
	for(int i=0 ; i<n ; i++){
		printf(" %d ",productStart[i]);
	}
	printf("\n");

	productEnd[n-1] = arr[n-1];
	prodEnd(arr,0,n-2);	
	for(int i=0 ; i<n ; i++){
		printf(" %d ",productEnd[i]);
	}
	printf("\n");

	retArray[0] = productEnd[1];
	retArray[n-1] = productStart[n-2];
	puzzleArray(arr,1,retArray);	
	for(int i=0 ; i<n ; i++){
		printf(" %d ",retArray[i]);
	}
	printf("\n");
}

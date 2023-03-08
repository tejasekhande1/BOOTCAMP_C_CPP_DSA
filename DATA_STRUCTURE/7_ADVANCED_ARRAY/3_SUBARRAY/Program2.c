
// PRINT ALL SUBARRAYS IN GIVEN ARRAY

#include <stdio.h>

void cntSubArray(int arr[],int n){
	for(int i=0 ; i<n ; i++){
		
		int var = i;
		int j=i;
	
		for( ; j<=var ; j++){
			if(var == n) break;		
			printf(" %d ",arr[j]);		
			if(var == j){
				printf("\n");
				var = var+1;
				j=i;
			}
		}
		printf("\n");
	}
}

void main(){
	int arr[] = {4,2,1,3};
	int n = sizeof(arr)/sizeof(int);
	cntSubArray(arr,n);
}

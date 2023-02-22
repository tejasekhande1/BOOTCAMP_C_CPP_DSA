
// SUM(START,END) = SUM(0,END) - SUM(0,START-1) => ARR[END] - ARR[START-1] (WHERE START != 0)
// SUM(0,END) = ARR[END]; (WHERE START == 0)
// SUM(START,END) = ARR[START] OR ARR[END] (WHERE START == END)

#include <stdio.h>

void prefixSum(int arr[],int n){
	for(int i=1 ; i<n ; i++){
		arr[i] = arr[i-1] + arr[i];
	}	
}

void main(){
	int n;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	prefixSum(arr,n);
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

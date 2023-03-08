#include <stdio.h>

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int arr[],int start,int end){
	int idx = start;
	int pivot = arr[end];
	for(int i=start ; i<end ; i++){
		if(arr[i] <= pivot){
			swap(&arr[i],&arr[idx]);
			idx++;
		}
	}

	swap(&arr[end],&arr[idx]);
	return idx;
}

void quickSort(int arr[],int start,int end){
	if(start < end){
		int pivot = partition(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
}

void main(){
	int arr[] = {8,9,4,1,2,3,11,7};
	int n = sizeof(arr)/sizeof(int);
	int start = 0;
	int end = n-1;
	printf("Array Before Sorting : \n");
	for(int i=0 ; i<=end ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");

	quickSort(arr,start,end);
	
	printf("Array After Sorting : \n");
	for(int i=0 ; i<=end ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

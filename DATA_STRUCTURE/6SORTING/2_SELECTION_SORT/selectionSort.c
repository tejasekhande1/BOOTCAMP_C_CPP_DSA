#include <stdio.h>

void selectionSort(int arr[],int size){
	for(int i=0 ; i<size-1 ; i++){
		int min = i;
		for(int j=i+1 ; j<size ; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void main(){
	int arr[] = {5,2,3,1,4};
	int n = 5;
	printf("Array Before Sort\n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	selectionSort(arr,5);
	printf("\nArray After Sort\n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

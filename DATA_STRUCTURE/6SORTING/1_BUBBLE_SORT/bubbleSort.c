#include <stdio.h>

void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[],int n){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void main(){
	int n;
	printf("Enter Size of an Array : \n");
	scanf("%d",&n);

	int arr[n];

	printf("Enter Elements in Array : \n");
	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Array Before Sorted : \n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}

	bubbleSort(arr,n);

	printf("\nArray After Sorted : \n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

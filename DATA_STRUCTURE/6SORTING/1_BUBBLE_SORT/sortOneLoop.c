#include <stdio.h>

void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[],int n){
	int cnt = 0;
	int i=0,k;
	for(; i<n ; i++){
		k = n-cnt-1;
		if(k == 0){
			break;
		}

		if(i == k){
			cnt++;
			i=0;
		}

		if(arr[i] > arr[i+1]){
			swap(&arr[i],&arr[i+1]);
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

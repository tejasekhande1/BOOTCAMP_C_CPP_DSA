#include <stdio.h>

void selectionSort(int arr[],int n){
	for(int i=1 ; i<n ; i++){
		int ele = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > ele){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = ele;
	}
}

void main(){
	int n = 5;
	int arr[] = {5,3,4,1,2};
	selectionSort(arr,n);
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

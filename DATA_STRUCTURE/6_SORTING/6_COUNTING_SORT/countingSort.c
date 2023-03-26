#include <stdio.h>
void countSort(int arr[],int n){
	int max = arr[0];
	for(int i=1 ; i<n ; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}

	int cntArr[max+1];
	for(int i=0 ; i<=max ; i++){
		cntArr[i] = 0;
	}

	for(int i=0 ; i<n ; i++){
		cntArr[arr[i]]++;
	}

	printf("Counting Array : \n");
	for(int i=0 ; i<=max ; i++){
		printf(" | %d",cntArr[i]);
	}
	printf(" |\n");
	
	for(int i=1 ; i<=max ; i++){
		cntArr[i] = cntArr[i]+cntArr[i-1];
	}

	int output[n];
	for(int i=n-1 ; i>=0 ; i--){
		output[cntArr[arr[i]]-1] = arr[i];
		cntArr[arr[i]]--;
	}

	for(int i=0 ; i<n ; i++){
		arr[i] = output[i];
	}
}
void main(){
//	int arr[] = {3,7,2,1,8,2,5,7};
	int arr[] = {3,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Array Before Sort : \n");
	for(int i=0 ; i<n ; i++){
		printf(" | %d",arr[i]);
	}
	printf(" |\n");
	countSort(arr,n);
	printf("Array After Sort : \n");
	for(int i=0 ; i<n ; i++){
		printf(" | %d",arr[i]);
	}
	printf(" |\n");
}

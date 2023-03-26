#include <stdio.h>

void countSort(int arr[],int size,int pos){
	int cntArr[10];
	for(int i=0 ; i<10 ; i++){
		cntArr[i] = 0;
	}

	for(int i=0 ; i<size ; i++){
		cntArr[(arr[i]/pos)%10]++;
	}

	for(int i=1 ; i<10 ; i++){
		cntArr[i] = cntArr[i] + cntArr[i-1];
	}

	int output[size];
	for(int i=size-1 ; i>=0 ; i--){
		output[cntArr[(arr[i]/pos)%10]-1] = arr[i];
		cntArr[(arr[i]/pos)%10]--;
	}

	for(int i=0 ; i<size ; i++){
		arr[i] = output[i];
	}
}

void radixSort(int arr[],int size){
	int max = arr[0];
	for(int i=1 ; i<size ; i++){
		if(max < arr[i]) max = arr[i];
	}

	for(int pos=1 ; max/pos > 0 ; pos = pos*10){
		countSort(arr,size,pos);
	}
}
void main(){

	int arr[] = {7200,125,45,1987,6,502};
	int size = sizeof(arr)/sizeof(arr[0]);

	printf("Array Before Sort : \n");
	for(int i=0 ; i<size ; i++){
		printf("|%d",arr[i]);
		if(i == size-1) printf("|\n");
	}

	radixSort(arr,size);

	printf("Array After Sort : \n");
	for(int i=0 ; i<size ; i++){
		printf("|%d",arr[i]);
		if(i == size-1) printf("|\n");
	}
}

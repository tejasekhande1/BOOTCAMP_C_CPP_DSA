#include <stdio.h>
void merge(int arr[],int start,int mid,int end){
	int x = mid-start+1;
	int y = end-mid;
	int newArr1[x];
	int newArr2[y];

	for(int i=0 ; i<x ; i++){
		newArr1[i] = arr[start+i];
	}
	
	for(int j=0 ; j<y ; j++){
		newArr2[j] = arr[mid+1+j];
	}

	int i=0,j=0,t=start;

	while(i<x && j<y){
		if(newArr1[i] < newArr2[j]){
			arr[t] = newArr1[i];
			i++;
		}else{
			arr[t] = newArr2[j];
			j++;
		}
		t++;
	}

	while(i<x){
		arr[t] = newArr1[i];
		i++;
		t++;
	}

	while(j<y){
		arr[t] = newArr2[j];
		j++;
		t++;
	}
}

void mergeSort(int arr[],int start,int end){
	if(start < end){
		int mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
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

	mergeSort(arr,start,end);
	
	printf("Array After Sorting : \n");
	for(int i=0 ; i<=end ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

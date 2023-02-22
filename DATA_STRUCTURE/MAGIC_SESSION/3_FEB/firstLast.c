#include <stdio.h>

int firstSearch(int arr[],int n,int key){
	int start = 0;
	int end = n-1;
	int ret = -1;
	while(start <= end){
		int mid = start + (end-start)/2;
		if(arr[mid] == key){
			ret = mid;
			end = mid-1;
		}

		if(arr[mid] > key){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	return ret;
}

int lastSearch(int arr[],int n,int key){
	int start = 0;
	int end = n-1;
	int ret = -1;
	while(start <= end){
		int mid = start + (end-start)/2;
		if(arr[mid] == key){
			ret = mid;
			start = mid+1;
		}

		if(arr[mid] > key){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	return ret;
}

void main(){
	int arr[] = {1,4,4,5};
	int n = 4;
	int f = firstSearch(arr,n,4);
	int l = lastSearch(arr,n,4);
	int newArr[2] = {f,l};
	printf("First Index : %d\n",newArr[0]);
	printf("Last Index : %d\n",newArr[1]);
}

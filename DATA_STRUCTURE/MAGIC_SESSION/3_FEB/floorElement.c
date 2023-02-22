#include <stdio.h>

int floorEle(int arr[],int n,int key){
	int start = 0;
	int end = n-1;
	int ret = -1;
	while(start <= end){
		int mid = start + (end-start)/2;
		if(arr[mid] == key){
			return arr[mid];
		}

		if(arr[mid] > key){
			end = mid-1;
		}

		if(arr[mid] < key){
			ret = arr[mid];
			start = mid+1;
		}
	}

	return ret;
}

void main(){
	int arr[] = {2,3,6,9,10,11,14,18};
	int n = 8;
	int key = 12;
	int ret = floorEle(arr,n,key);
	printf("Floor Element : %d\n",ret);
}

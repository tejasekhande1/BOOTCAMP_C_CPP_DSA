#include <stdio.h>

int firstOcc(int arr[],int n,int key){
	int start = 0;
	int end = n-1;
	int ret = -1;
	while(start <= end){
		int mid = start + (end-start)/2;
		while(start <= end){
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
	}
	return ret;
}

void main(){
	int arr[] = {1,4,4,5};
	int n = 4;
	int key = 4;
	int ret = firstOcc(arr,n,key);
	printf("First Occurence At Index : %d\n",ret);
}

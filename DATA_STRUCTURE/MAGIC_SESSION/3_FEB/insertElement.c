#include <stdio.h>
int insertEle(int arr[],int n,int key){
	int ret = -1;
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = start + (end-start)/2;
		if(arr[mid] == key){
			return mid;
		}

		if(arr[mid] > key){
			if(mid <= ret){
				ret = mid+1;
			}
			end = mid-1;
		}

		if(arr[mid] <= key){
			if(mid >= ret){
				ret = mid+1;
			}
			start = mid+1;
		}
	}
	return ret;
}
void main(){
	int arr[] = {1,3,5,7};
	int n = 4;
	int key = 2;
	int ret = insertEle(arr,n,key);
	printf("Index : %d\n",ret);
}

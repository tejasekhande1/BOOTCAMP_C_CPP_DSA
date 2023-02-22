// BINARY SEARCH :

#include <stdio.h>

int binarySearch(int arr[],int len,int ele){

	int start = 0;
	int end = len-1;
	
	while(start <= end){
		int mid = (start+end)/2;
	
		if(arr[mid] == ele)
			return mid;

		if(arr[mid] < ele)
			start = mid + 1;

		if(arr[mid] > ele)
			end = mid-1;
	}

	return -1;
}

int myBinarySearch(int arr[],int start,int end,int ele){
	
	if(start <= end){
		int mid = (start+end)/2;
		if(arr[mid] == ele)
			return mid;
		if(arr[mid] < ele){
			start = mid + 1;
			return myBinarySearch(arr,start,end,ele);
		}else{
			end = mid -1;
			return myBinarySearch(arr,start,end,ele);
		}
		
		//OR return myBinarySearch(arr,start,end,ele);
		
	}

	return -1;
}

void main(){

	int arr[] = {3,27,31,125,225,350,724,830,990,1120};

	int len = sizeof(arr)/sizeof(int);

	int start = 0;                  // --> FOR RECURSIVE
	int end = len-1;

	int ele;
	printf("Enter Element From Array : ");
	scanf("%d",&ele);

	int index = myBinarySearch(arr,start,end,ele);

	if(index != -1)
		printf("Index Of Element in Array : %d\n",index);
	else
		printf("Index Of Element in Array : %d\n",index);
}

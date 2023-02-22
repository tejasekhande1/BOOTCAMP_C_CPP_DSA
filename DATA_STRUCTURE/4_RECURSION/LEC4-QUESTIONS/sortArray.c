#include <stdio.h>
#include <stdbool.h>

bool sortArray(int arr[],int n,int idx){
	if(idx == n){
		return true;
	}
	if(arr[idx] > arr[idx+1]){
		return false;
	}
	return sortArray(arr,n,idx+1);
}

void main(){
	int n;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Elements in an Array : ");
	for(int i=0; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	bool ret = sortArray(arr,n-1,0);
	printf("0.False 1.True ---> %d\n",ret);
}

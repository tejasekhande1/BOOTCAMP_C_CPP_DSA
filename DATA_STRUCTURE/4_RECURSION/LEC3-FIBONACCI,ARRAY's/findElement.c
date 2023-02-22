#include <stdio.h>

int findElement(int arr[],int x,int n){
	if(n == 0)
		return -1;

	if(arr[n-1] == x){
		return n-1;
	}

	return findElement(arr,x,n-1);
}

void main(){
	int n = 5;
	int arr[] = {10,20,30,40,50};
	int ret = findElement(arr,60,5);
	if(ret == -1){
		printf("Invalid Element\n");
	}else{
		printf("Element Found At Index: %d\n",ret);
	}
}

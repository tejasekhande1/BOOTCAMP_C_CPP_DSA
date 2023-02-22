#include <stdio.h>

int sumArray(int arr[],int n){
	if(n == 1){
		return arr[0];
	}
	return sumArray(arr,n-1) + arr[n-1];
}

void main(){
	int n = 5;
	int arr[] = {10,20,30,40,50};
	int ret = sumArray(arr,n);
	printf("%d\n",ret);
}

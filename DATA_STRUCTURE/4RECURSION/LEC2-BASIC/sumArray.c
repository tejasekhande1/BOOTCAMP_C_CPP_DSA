#include <stdio.h>

int sumArray(int arr[],int n){
	int sum = 0;
	for(int i=0 ; i<n ; i++){
		sum = sum + arr[i];
	}
	return sum;
}

int sumArr(int arr[],int n){
	if(n < 0){
		return 0;
	}
	return sumArr(arr,n-1) + arr[n-1];
}

void main(){
	int arr[] = {1,2,3,4,5};
	int res = sumArray(arr,5);
	printf("%d\n",res);
	int ret = sumArr(arr,5);
	printf("%d\n",ret);
}

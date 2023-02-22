#include <stdio.h>
#include <stdbool.h>

bool evenArray(int arr[],int n){
	static int count = 0;
	if(n < 0){
		return false;
	}
	if(arr[n] % 2 == 0){
		count++;
	}
	if(count == 2){
		return true;
	}
	return evenArray(arr,n-1);
}

void main(){
	int n;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Elements in an Array : \n");
	for(int i=0; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	bool ret = evenArray(arr,n-1);
	printf("0.False 1.True ---> %d\n",ret);
}

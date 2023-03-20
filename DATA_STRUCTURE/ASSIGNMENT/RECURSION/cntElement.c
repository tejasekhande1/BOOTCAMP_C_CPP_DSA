#include <stdio.h>

static int max;

int maxElement(int arr[],int n){

	if(n < 0){
		return max;
	}

	if(max < arr[n])
		max = arr[n];
	
	return maxElement(arr,n-1);

}

int cntElements(int arr[],int n,int max){
	if(n < 0){
		return 0;
	}

	if(max > arr[n]){
		return 1+cntElements(arr,n-1,max);
	}else{
		return cntElements(arr,n-1,max);
	}
	
}
void main(){
	int arr[] = {3,4,5};
	int n = 3;
	int maxEle = maxElement(arr,n-1);
	int cnt = cntElements(arr,n-1,maxEle);
	printf("Max : %d\n",maxEle);
	printf("Count : %d\n",cnt);
}

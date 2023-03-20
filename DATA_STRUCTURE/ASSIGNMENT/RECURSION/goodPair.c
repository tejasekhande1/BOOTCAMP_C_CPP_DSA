#include <stdio.h>

int goodPair(int arr[],int n,int k,int i,int j){

	if(i>n && j>n){
		return 0;
	}

	if(j>n){
		i=i+1;
		j=-1;
	}

	if( (i != j && j>=0 && i>j) && (arr[i]+arr[j] == k)){
		return 1 + goodPair(arr,n,k,i,j+1);
	}else{
		return goodPair(arr,n,k,i,j+1);
	}
}
void main(){
	int arr[] = {1,2,3,4};
	int n = 4 ;
	int k = 4;
	int i=0,j=0;
	int ret = goodPair(arr,n-1,k,i,j);
	printf("Count : %d\n",ret);
}

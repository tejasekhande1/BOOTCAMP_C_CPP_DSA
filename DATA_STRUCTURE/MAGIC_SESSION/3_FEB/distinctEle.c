#include <stdio.h>
int retDist(int arr[],int n){
	int ret = 0;
	for(int i=0 ; i<n ; i++){
		ret = ret ^ arr[i];
	}
	return ret;
}
void main(){
	int arr[] = {1,1,2,3,3,};
	int n = 5;
	int ret = retDist(arr,n);
	printf("Distinct Element : %d\n",ret);
}

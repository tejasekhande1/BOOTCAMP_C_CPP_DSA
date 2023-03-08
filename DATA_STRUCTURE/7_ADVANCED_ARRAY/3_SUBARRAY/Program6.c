#include <stdio.h>
void sumOfSubArray(int arr[],int n){
	for(int i=0 ; i<n ; i++){
		for(int j=i ; j<n ; j++){
			int sum = 0;
			for(int k=i ; k<=j ; k++){
				sum += arr[k];
			}
			printf("%d\n",sum);
		}
	}
}
void main(){
	int arr[] = {4,2,1,3};
	int n = 4;
	sumOfSubArray(arr,n);
}

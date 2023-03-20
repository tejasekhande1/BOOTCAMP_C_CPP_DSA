#include <stdio.h>
int rangeRev(int arr[],int s,int e){
	if(s > e) return 0;
	
	int temp = arr[s];
	arr[s] = arr[e];
	arr[e] = temp;

	return rangeRev(arr,s+1,e-1);	
}
void main(){
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
	rangeRev(arr,1,4);
	for(int i=0 ; i<n ; i++){
		printf("%d\n",arr[i]);
	}
}

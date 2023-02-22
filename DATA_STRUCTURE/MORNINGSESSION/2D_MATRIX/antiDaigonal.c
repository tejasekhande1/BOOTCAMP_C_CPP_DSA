#include <stdio.h>

void antiDaigonal(int arr[4][4],int n){
	int m = (2*n)-1;
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			for(int k=0 ; k<n ; k++){
				if((j+k) == i){
					printf(" %d ",arr[j][k]);
				}
			}
		}
		printf("\n");
	}
}

void main(){
	int n=4;
	int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	antiDaigonal(arr,n);
}

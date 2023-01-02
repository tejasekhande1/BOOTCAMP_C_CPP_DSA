#include <stdio.h>

void main(){

	int arr1[2][3] = {1,2,3,4,5,6};

	int (*ptr1)[2][3] = &arr1; 

	for(int i=0 ; i<2 ; i++){
		for(int j=0 ; j<3 ; j++){
		printf("%d\n",*(*(arr1 + i) + j ));
		}
	}


}

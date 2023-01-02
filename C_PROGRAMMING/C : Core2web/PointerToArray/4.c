#include <stdio.h>

void main(){

	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};

	int (*ptr1)[5] = &arr1;   // complete pointer kade baghel  // ani ekda star lavla tr to fkt gate paryant jato....double star lavla tr to value deil
	int (*ptr2)[5] = &arr2 ;
	
//	printf("%d\n",*(*ptr1));    // 1
//
//	ptr1++ ;
//
//	printf("%d\n",*(*ptr1));    // address


//	printf("%d\n",ptr1[0][0]);        // 1
//	printf("%d\n",*(*(ptr1+0)+0));    // 1

	for(int i=0 ; i<1 ; i++){
		for(int j=0 ; j<5 ; j++){
			printf("%d\n",*(*(ptr1 + i) + j));
		
		}
	}

	for(int i=0 ; i<1 ; i++){
		for(int j=0 ; j<5 ; j++){
			printf("%d\n",*(*(ptr2 + i) + j));
		
		}
	}
}

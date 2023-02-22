
//PRODUCT ARRAY PUZZLE :

/*
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <stdio.h>
void productArray(int arr[],int n){
	int productStart[n];
	int productEnd[n];

	productStart[0] = arr[0];
	for(int i=1 ; i<n ; i++){
		productStart[i] = productStart[i-1]*arr[i];
	}
	
	printf("Product Prefix Array From Start : \n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",productStart[i]);
	}
	printf("\n");


	productEnd[n-1] = arr[n-1];
	for(int i=n-2 ; i>=0 ; i--){
		productEnd[i] = productEnd[i+1]*arr[i];
	}

	printf("Product Prefix Array From End: \n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",productEnd[i]);
	}
	printf("\n");

	arr[0] = productEnd[1];
	arr[n-1] = productStart[n-2];
	for(int i=1 ; i<=n-2 ; i++){
		arr[i] = productStart[i-1]*productEnd[i+1];
	}

	printf("Final Product Array : \n");
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}
void main(){
	int n;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Elements in an Array : ");
	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	productArray(arr,n);
}

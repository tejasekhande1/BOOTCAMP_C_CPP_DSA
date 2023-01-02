//Enter two array from the user of the same size and print the addition of the elements of the two array at the same index
#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	int arr1[x],arr2[x];
	printf("Enter first array\n");
	for(int i=0;i<x;i++){
		scanf("%d",&arr1[i]);
	
	}
	printf("Enter second array\n");
	for(int i=0;i<x;i++){
		scanf("%d",&arr2[i]);
	}
	printf ("The first array is \n");
	for(int i=0;i<x;i++){
		printf("%d ",arr1[i]);
	}printf("\n");
	printf("The second array is\n");
	for(int i=0;i<x;i++){
		printf("%d ",arr2[i]);
	}printf("\n");
	printf("The addition of indexes is\n");
	for(int i=0;i<x;i++){
		int num = arr1[i] + arr2[i];
		printf("%d ",num);
	}
}

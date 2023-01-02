//Print the array in the reverse order
#include<stdio.h>
void main(){
	int x;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is\n");
	for(int i=0;i<x;i++){
		printf("%d ",arr[i]);
	}printf("\n");
	printf("The reverse array is\n");
	for(int i=x-1;i>=0;i--){
		printf("%d ",arr[i]);
	}printf("\n");
}

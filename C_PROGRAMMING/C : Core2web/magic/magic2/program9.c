#include<stdio.h>
void main(){
	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};
	int *ptr1 = 0;
	int *ptr2 = 0;
	ptr1 = arr1 + 3;
	ptr2 = arr2 + 2;
       *ptr1 = 35;
	for(int i=0;i<5;i++){	
		printf("%d ",arr1[i]);
	}printf("\n");
	for(int i=0;i<5;i++){
		printf("%d ",arr2[i]);
	}printf("\n");
}

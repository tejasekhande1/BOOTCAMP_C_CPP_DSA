//Enter the size of the array and array from the user and search the element is present in the array or not
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
	int num;
	printf("Enter the element you want to search\n");
	scanf("%d",&num);
	int flag = 0;
	for(int i=0;i<x;i++){
		if (arr[i] == num){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("Element found\n");
	}else{
		printf("Element not found\n");
	}
}

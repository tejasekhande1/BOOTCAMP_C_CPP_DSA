//Enter the size of the array and get the array elements from user and print the count of even elements and odd elements
#include<stdio.h>
void main(){
	int x,count1=0,count2=0;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is \n");
	for(int i=0;i<x;i++){
		printf("%d ",arr[i]);
	}printf("\n");
	for(int i=0;i<x;i++){
		if (arr[i] % 2 == 0){
			count1++;
		}else{
			count2++;
		}
	}
	printf("The count of the even elements is %d\n",count1);
	printf("The count of the odd elements is %d\n",count2);
}

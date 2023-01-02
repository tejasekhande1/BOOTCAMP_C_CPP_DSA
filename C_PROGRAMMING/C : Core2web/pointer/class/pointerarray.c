#include<stdio.h>
void main(){
	int arr1[]={10,20,30,40};
	int arr2[]={50,60,70,80};
	int (*ptr1)[4] = &arr1;
	int arr3[]={1,2,3,4};
	int (*ptr2)[4] = &arr2;
	int (*ptr3)[4] = &arr3;
	int (*arr)[3] = {&arr,&arr2,&arr3};
	printf("%d\n",*(*ptr1+2));
//	printf("%d\n",ptr2);
//	printf("%d\n",arr[1]);
	
}

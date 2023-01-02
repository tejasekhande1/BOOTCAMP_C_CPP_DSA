#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50};
	int *ptr = &arr[5];
	printf("%d\n",*(ptr));
}
	

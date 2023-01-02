#include <stdio.h>

void main(){
	int arr[] = {1,2,3,4,5};

	int *ptr = arr ;
	int *ptr1 = &arr;

	printf("%p\n",ptr);
	printf("%p\n",ptr1);
	
 	ptr++ ;
	ptr1++ ;

	printf("%d\n", *ptr);
	printf("%d\n", *ptr1);
}

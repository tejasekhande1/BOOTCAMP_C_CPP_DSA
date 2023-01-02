#include <stdio.h>
void main(){
	int arr1[3] = {10,20,30};
	int arr2[3] = {40,50,60};

	int (*iptr1)[3] = &arr1;
	int (*iptr2)[3] = &arr2;
	printf("%d\n",**iptr1);                // 10
	printf("%d\n",**iptr2);		       // 40

	int (*iptr)[3]={&arr1,&arr2};
	printf("%d\n",**iptr[0]);              // 10
	printf("%d\n",**iptr[1]);              // 40
}

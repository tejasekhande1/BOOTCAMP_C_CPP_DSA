#include<stdio.h>
void main(){
	char arr[] = {'a','b','c','d','e'};
	char *ptr1 = &arr[3];
	char *ptr2 = &arr[4];
	printf("%c\n",*ptr1);
	printf("%c\n",*ptr2);
	printf("%c\n",*(ptr1+2));
	printf("%c\n",*(ptr2+1));
}

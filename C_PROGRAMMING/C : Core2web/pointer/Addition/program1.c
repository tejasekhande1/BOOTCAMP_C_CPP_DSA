#include<stdio.h>
void main(){
	int x=10,y=20;
	int *ptr1 = &x;
	int *ptr2 = &y;
	printf("%d\n",*ptr1 + *ptr2);
//	printf("%p\n",ptr1 + ptr2);
//	the addition of the pointer is not allowed...
}

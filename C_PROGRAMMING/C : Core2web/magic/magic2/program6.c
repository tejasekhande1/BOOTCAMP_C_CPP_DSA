// to swap te two numbers 
// if x=10 and y=20 
// after swapping x=20 and y=10
#include<stdio.h>
void main(){
	int x=10,y=20;
	int *ptr1 = &x;
	int *ptr2 = &y;
	printf("Before swapping\n");
	printf("x=%d\n",*ptr1);
	printf("y=%d\n",*ptr2);
	/*int *ptr3= 0;
	ptr3 = ptr2;
	ptr2 = ptr1;
	ptr1 = ptr3;*/
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	printf("After swapping\n");
	printf("x = %d\n",*ptr1);
	printf("y = %d\n",*ptr2);
}

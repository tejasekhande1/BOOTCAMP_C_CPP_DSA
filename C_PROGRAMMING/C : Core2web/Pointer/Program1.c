#include <stdio.h>
void main(){
	int x = 10;
	int y = 65;

	int *ptr1 = &x;
	char *ptr2 = &y;

	printf("%d\n",ptr1-ptr2);
}

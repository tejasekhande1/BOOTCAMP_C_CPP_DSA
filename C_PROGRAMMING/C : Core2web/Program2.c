#include <stdio.h>
void main(){
	const int x = 10;
	int *ptr = &x ;
	printf("%d\n",*ptr);
	printf("%d\n",x);

	*ptr = 20;
	printf("%d\n",*ptr);
	printf("%d\n",x);
}

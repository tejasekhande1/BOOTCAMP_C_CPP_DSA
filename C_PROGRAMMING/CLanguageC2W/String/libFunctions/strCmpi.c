#include <stdio.h>
#include <string.h>
void main(){
	char dest[20] = "TEJAS";
	char src[30] = "tEJAS";
	int x = strcmpi(dest,src);
	if(x == 0)
		printf("String Same\n");
	else
		printf("String NOT Same\n");
}

// IMPLICIT DECLARATION

#include <stdio.h>
#include <string.h>
void main(){
	char dest[20] = "TEJAS";
	char *src = "TEJAS";
	int x = strcmp(dest,src);
	if(x == 0)
		printf("String Same\n");
	else
		printf("String NOT Same\n");
}

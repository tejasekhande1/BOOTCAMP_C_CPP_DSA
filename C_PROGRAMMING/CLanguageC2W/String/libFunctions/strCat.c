#include <stdio.h>
#include <string.h>
void main(){
	char dest[20] = "TEJAS";
	char *src = "EKHANDE";
	strcat(dest,src);
	puts(dest);
}

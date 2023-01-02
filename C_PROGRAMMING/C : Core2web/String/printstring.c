/* 1) Printf ------> with format specifier  or without format specifier


2)Puts ------>  automatically give \n  */

#include <stdio.h>
void main(){
	
	char *classname = "Core2web";
	char str[10] = "Biencaps";

	printf("%s\n",classname);
	printf("%s\n",str);

	puts(classname);
	puts(str);
}

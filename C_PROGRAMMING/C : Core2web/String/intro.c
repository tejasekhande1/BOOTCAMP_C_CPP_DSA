#include <stdio.h>

void main(){

	char *str1 = "core2web";
	char *str2 = "shashi";

	printf("%ld\n",sizeof(str1));		   // -------> 8
	printf("%ld\n",sizeof(str2));              // -------> 8
	printf("%ld\n",sizeof("Core2web"));        // -------> 9           because it reserve a one place for '\0' i.e. Core2web\0
	printf("%ld\n",sizeof("shashi"));          // -------> 7           shashi\0

}

// Note : \0 indicates the end of string

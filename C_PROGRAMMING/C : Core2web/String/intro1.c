#include <stdio.h>

void main(){

	char str1[] = "core2web";
	char str2[] = "shashi";
	char str3[] = {'c','o','r','e','2','w','e','b'};
	char str4[] = {'s','h','a','s','h','i'};

	printf("%ld\n",sizeof(str1));		   // -------> 9
	printf("%ld\n",sizeof(str2));              // -------> 7
	printf("%ld\n",sizeof("Core2web"));        // -------> 9           because it reserve a one place for '\0' i.e. Core2web\0
	printf("%ld\n",sizeof("shashi"));          // -------> 7           shashi\0
	printf("%ld\n",sizeof(str3));		   // -------> 8
	printf("%ld\n",sizeof(str4));              // -------> 6

}

// Note : '\0' indicates the end of string...string added \0 because string is literal.
// 2) in list array they cannot add '\0' so size is as the total number present in ist

#include <stdio.h>
#include <string.h>

void main(){
	char *str1 = "Shashi";
	char *str2 = "Shashi";

	int ret ;
	ret = strcmp(str1,str2);

	if(ret == 0)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");

}

/*
	if str1 = "SHASHI"
	str2 = "shashi";

	ret = strcasecmp(str1,str2)

	*/

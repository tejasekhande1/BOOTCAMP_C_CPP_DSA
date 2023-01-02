/* strlen ------> length of string ; strcpy ----> copy string ; strcmp ----> compare ;  strrev -----> reverse string */

/*
#include <stdio.h>
#include <string.h>

void main(){

	// strlen()
	char *str1 = "Core2web";
	char str2[10] = "Bielearn";

	printf("%ld\n",strlen(str1));     // library function
	printf("%ld\n",strlen(str2));
	
} */

#include <stdio.h>
#include <string.h>

long mystrlen( char *str) {
	int count = 0 ;
	while(*str != '\0'){
		str++ ;
		count++ ;
	}

	return count ;
}

void main(){
	char *str1 = "Core2web";
	char *str2 = "Bielearn";

	printf("%ld\n",mystrlen(str1));    // customized function
	printf("%ld\n",mystrlen(str2));
}

// note : 1 ) interview question ------> write a program to print length of string without using library function 

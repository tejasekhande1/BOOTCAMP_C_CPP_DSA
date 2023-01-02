
#include <stdio.h>


/*
 * #include <string.h>

void main(){
	
	char str1[20] = "Core2web";
	char str2[20] = "Technology";

	strcat(str1,str2);

	puts(str1);
	puts(str2);

} 
*/

char* mystrcat(char *src , char *dest){
	while(*src != '\0'){
		src++ ;
	}
	while(*dest != '\0'){
	*src = *dest ;
	*src++ ;
	*dest++ ;
	}

	*src = '\0';
	return src ;

}

void main(){
	char str1[20] = "Core2web";
	char str2[20] = "Technology";

	mystrcat(str1,str2);

	puts(str1);
	puts(str2);
}

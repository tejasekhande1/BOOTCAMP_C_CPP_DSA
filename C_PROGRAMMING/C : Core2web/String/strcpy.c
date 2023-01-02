// copy string function

/*
#include <stdio.h>
#include <string.h>
void main(){

	char *str1 = "Biencaps";
	char str2[20];

	strcpy(str2,str1);                     // library function

	puts(str1);
	puts(str2);
}
*/

#include <stdio.h>

char* mystrcpy (char *dest , char *src){

	while( *src != '\0'){
	*dest = *src ;
	dest++;
	src++;
	
	}

	*dest = '\0';
	return dest ;                 // --------> Not compulsory
}

void main(){
	char *str1 = "Biencaps";
	char str2[20] ;

	mystrcpy(str2,str1);

	puts(str1);
	puts(str2);
}

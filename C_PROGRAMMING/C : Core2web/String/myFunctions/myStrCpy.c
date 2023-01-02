#include <stdio.h>
char* myStrCpy(char *str1,char *str2){
	while(*str1 != '\0'){
		*str2 = *str1;
		str2++;
		str1++;
	}

	*str2 = '\0';
	return str2;
}
void main(){
	char *str1 = "shashi";
	char str2[20];
	myStrCpy(str1,str2);
	puts(str1);
	puts(str2);
}

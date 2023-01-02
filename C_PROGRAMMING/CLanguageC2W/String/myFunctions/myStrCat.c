#include <stdio.h>
char* myStrCat(char* str1,char* str2){
	
	while(*str1 != '\0'){
		str1++;
	}
	
	while(*str2 != '\0'){
		*str1 = *str2;
		str1++;
		str2++;
	}

	return str1;
}
void main(){
	char str1[20] = "Tejas";
	char *str2 = "Ekhande";
	myStrCat(str1,str2);
	puts(str1);
	puts(str2);
}

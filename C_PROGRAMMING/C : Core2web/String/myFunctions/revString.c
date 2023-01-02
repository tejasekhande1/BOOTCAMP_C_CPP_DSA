#include <stdio.h>
#include <string.h>
char* revString(char* str){
	char *temp = str;
	while(*temp != '\0'){
		temp++;
	}
	temp = temp - 1;
	while(str < temp){
		char temp1 = *str;
		*str = *temp;
		*temp = temp1;
		str++;
		temp--;
	}
	return str;
}
void main(){
	char str[10] = "tejas";
	puts(str);
	revString(str);
	puts(str);
	printf("%d\n",strlen(str));
}

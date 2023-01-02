#include <stdio.h>

int myStrCmp(char* str1,char* str2){
	while(*str1 != '\0' && *str2 !='\0'){
		if(*str1 == *str2){
			str1++;
			str2++;
		}else{
			return *str1-*str2;
		}

		return 0;
	}
}

void main(){
	char *str1 = "Tejas";
	char *str2 = "tejas";
	int diff = myStrCmp(str1,str2);
	
	if(diff == 0){
		printf("String Same\n");
	}else{
		printf("String NOT Same\n");
	}
}

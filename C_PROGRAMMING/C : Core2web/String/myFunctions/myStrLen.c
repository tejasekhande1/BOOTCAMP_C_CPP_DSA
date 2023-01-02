#include <stdio.h>
void myStrLen(char* str1){
	int count = 0;
	while(*str1 != '\0'){
		count++;
		str1++;
	}
	printf("%d\n",count);
}
void main(){
	char *str1 = "TEJAS";	
	char str2[] = {'T','E','J','A','S','\0'};
	char str3[] = {'T','E','J','A','S'};
	myStrLen(str1);                          // 5
	myStrLen(str2);				// 5
	myStrLen(str3);				// 10
}

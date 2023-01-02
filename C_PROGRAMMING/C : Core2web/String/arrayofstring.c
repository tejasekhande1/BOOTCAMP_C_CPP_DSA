#include <stdio.h>

void main(){

	char *str1[4] = {"shashi","kanha","ashish","rahul"};
	char str2[4][10] = {"Java","Python","C","Cpp"};

	for(int i=0 ; i<4 ; i++){
		printf("%s\n",*(str1+i));
		printf("%s\n",*(str2+i));
	}
	
}

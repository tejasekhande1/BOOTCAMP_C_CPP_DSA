#include <stdio.h>
void main(){
	char ch;
	printf("Enter Character : \n");
	scanf(" %c",&ch);

	if( ch >= 65 && ch <= 90){
		printf("%c is UPPERCASE character.\n",ch);
	}else{
		printf("%c is LOWERCASE character.\n",ch);
	}
}

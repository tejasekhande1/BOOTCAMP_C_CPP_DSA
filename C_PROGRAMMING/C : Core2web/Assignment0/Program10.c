#include <stdio.h>
void main(){
	char ch;
	printf("Enter Character : \n");
	scanf(" %c",&ch);

	if( ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U'){
		printf("%c is VOVEL Character.\n",ch);
	}else{
		printf("%c is CONSONANT Character.\n",ch);
	}
}

#include <stdio.h>

void main(){

	char ch,ch1,diff;

	printf("Enter char:");
	scanf("%c",&ch);

	printf("Enter char:");
	scanf(" %c",&ch1);

	if(ch == ch1){

		printf("%c = %c is a same\n",ch,ch1);

	} else if(ch != ch1){

		for(int i = ch; i <= ch1; i++){

			diff++;
		}

		printf("%d\n",diff);
	}
}

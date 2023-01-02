// WAP TAKES A NUMBER FROM 0-5 AND PRINT ITS SPELLING IF THE NUMBER IS GREATER THAN 5 PRINT ENTER NO GT5

#include <stdio.h>
void main(){
	int x;
	printf("Enter Value : ");
	scanf("%d",&x);

	if(x < 0){
		printf("%d is Negative Number.\n",x);
	}else if(x >= 65 && x <= 90){
		printf("USER ENTERD CAPITAL LETTER\n");
	}else if(x > 5){
		printf("%d is GREATER than 5\n",x);
	}else{
		switch(x){
			default :
				printf("WRONG INPUT\n");
				break;
			case 0 :
				printf(" %d : ZERO\n",x);
				break;
			case 1 :
				printf(" %d : ONE\n",x);
				break;
			case 2 :
				printf(" %d : TWO\n",x);
				break;
			case 3 :
				printf(" %d : THREE\n",x);
				break;
			case 4 :
				printf(" %d : FOUR\n",x);
				break;
			case 5 :
				printf(" %d : FIVE\n",x);
				break;
	if(x < 0){
		printf("%d is Negative Number.\n",x);
	}else if(x >= 65 && x <= 90){
		printf("USER ENTERD CAPITAL LETTER\n");
	}else if(x > 5){
		printf("%d is GREAT


// WAP TO CHECK WHETHER THE INPUT IS A LEAF YEAR OR NOT : 2000 LEAF YEAR ; 1999 NOT LEAF YEAR

#include <stdio.h>
void main(){
	int year;
	printf("Enter Year : \n");
	scanf("%d",&year);

	if(year < 0){
		printf("User entered NEGATIVE value\n");
	}else if(year % 4 == 0){
		printf("%d is LEAF year\n",year);
	}else{
		printf("%d is NOT LEAF year\n",year);
	}
}

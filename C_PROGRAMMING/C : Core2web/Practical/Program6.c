// WAP TO GET 10 NUMBERS FROM USERS AND PRINT THEIR SUM AND AVERAGE

#include <stdio.h>
void main(){
	float num;
	float sum = 0 ;
	float average;
	printf("Enter Numbers : \n");
	for(int i=1 ; i<=10 ; i++){
		scanf("%f",&num);
		sum = sum + num;
	}

	printf("Sum : %.2f\n",sum);
	printf("Average : %.2f\n",sum/10);
}

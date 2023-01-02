#include <stdio.h>

int factNum(int);

void main(){
	int val  ;

	printf("Enter Your Number : ");
	scanf("%d",&val);

	factNum(val);
}

int factNum(int num){

	int fact=1 ;
	for(int i=1 ; i<=num ; i++){
	fact = fact * i ;
	}

	printf("%d",fact);
}

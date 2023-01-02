#include <stdio.h>

int factNum(int);                             // prototype

void main(){
	int val  ;

	printf("Enter Your Number : ");
	scanf("%d",&val);

//	factNum(val);
	int ret = factNum(val);
	printf("%d",ret);
}

int factNum(int num){

	int fact=1 ;
	for(int i=1 ; i<=num ; i++){
	fact = fact * i ;
	}

//	printf("%d",fact);
	return fact ;
}


// void cant return any value so we cant add return in void

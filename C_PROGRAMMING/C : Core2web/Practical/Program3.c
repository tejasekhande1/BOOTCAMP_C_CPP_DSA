// WAP TO FIND MINIMUM NUMBER AMONG THREE NUMBERS

#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter First Number : \n");
	scanf("%d",&a);
	printf("Enter Second Number : \n");
	scanf("%d",&b);
	printf("Enter Third Number : \n");
	scanf("%d",&c);

	if( a < b && a < c){
		printf("%d is SMALLEST value among three numbers.\n",a);
	}else if(b < a && b < c){
		printf("%d is SMALLEST value among three numbers.\n",b);		
	else{
		printf("%d is SMALLEST value among three numbers.\n",c);
	}
}

#include <stdio.h>

void swap(int a,int b){
	a = a+b ;
	b = a-b ;
	a = a-b ;

	printf("%d %d\n", a,b);
}

void main(){
	int a=10 ;
	int b=5 ;
	printf("%d %d\n", a,b);
	swap(a,b);                        // call by value
	printf("%d %d\n", a,b);
}

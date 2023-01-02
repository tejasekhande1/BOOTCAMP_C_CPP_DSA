// defination : a pointer which store the address of instruction of function.
// returntype --->  *fun pointer name  ------> (para,para)

#include <stdio.h>

void sub(int x , int y){

	printf("%d\n", x-y);
}

void main(){

	void (*fptr) (int,int) = 0 ;                 //  ---------> Syntax of function pointer

	fptr = sub ;

	fptr(20,10);
}

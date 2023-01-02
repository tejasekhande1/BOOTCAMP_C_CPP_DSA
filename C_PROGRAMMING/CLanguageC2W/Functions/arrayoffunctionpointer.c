// array of function pointer

#include <stdio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void main(){

	void (*arrptr[4]) (int,int) = {add,sub,mul,div};
	for(int i=0 ; i<4 ; i++){
	arrptr[i] (10,20);

	}
}

void add(int x , int y){
	printf("%d\n", x+y);
}
void sub(int x , int y){
	printf("%d\n", x-y);
}
void mul(int x , int y){
	printf("%d\n", x*y);
}
void div(int x , int y){
	printf("%d\n", x/y);
}

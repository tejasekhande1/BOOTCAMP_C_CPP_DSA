// passing a function to a function
// function pass kela tr to address pathavto function cha so acceptor ha pointer pahije

#include <stdio.h>
void add(int,int);
void sub(int,int);
void funcallingfun(int,int,void(*)(int,int));
void main(){

	funcallingfun(10,20,add);

}

void add(int a,int b){
	printf("%d\n", a+b);	
}

void sub(int a,int b){
	printf("%d\n", a-b);	
}

void funcallingfun(int a,int b,void(*fptr)(int,int)){
	fptr(a,b);
	// internally ----> add(10,20);
}


// 30

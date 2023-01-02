#include <stdio.h>
void add(int a,int b){
	printf("%d\n",a+b);
}
void sub(int a,int b){
	printf("%d\n",a-b);
}
void main(){
	void (*ptr)(int,int);
	ptr = add;                             // & of first instruction in fun
	ptr(10,20);
	ptr = &sub;                            
	ptr(10,20);
}

// 30
//-10

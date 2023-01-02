#include <stdio.h>

int  add_sub(int a,int b){

	int add = 0 ;
       	int sub = 0 ;
	add = a+b;
	sub = a-b;
	return add,sub;
}

void main(){
	int x = 0 ;
	x = add_sub(10,5);
	printf("%d\n",x);

}

// 5 ------> this code show value of second return subjet i.e. sub

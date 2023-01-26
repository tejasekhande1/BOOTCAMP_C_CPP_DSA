#include <stdio.h>

void fun(int x){
	printf("%d\n",x);
	if(x > 0){
		fun(--x);
	}
}

void main(){
	fun(10);
}

// 10 9 8 7 6 5 4 3 2 1 0 

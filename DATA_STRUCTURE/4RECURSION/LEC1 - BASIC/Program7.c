#include <stdio.h>

int factorial(int x){
	static int fact = 1;
	fact = fact*x;
	if(x > 1){
		factorial(--x);
	}
	return fact;
}

void main(){
	int ret = factorial(5);
	printf("%d\n",ret);
}

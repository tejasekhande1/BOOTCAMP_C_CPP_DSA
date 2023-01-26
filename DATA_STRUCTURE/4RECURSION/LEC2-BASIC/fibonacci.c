#include <stdio.h>
int fun(int n){
	printf("N : %d\n",n);
	if(n <= 1){
		return 1;
	}
	return fun(n-2) + fun(n-1);
}

void main(){
	int ret = fun(3);
	printf("Sum : %d\n",ret);
}

#include <stdio.h>
int fun(int);
void main(){
	int s;
	s=fun(30);
	printf("%d\n",s);
}

int fun(int x){
	return(x>20?9:20);              // if true then 9 else 20
}

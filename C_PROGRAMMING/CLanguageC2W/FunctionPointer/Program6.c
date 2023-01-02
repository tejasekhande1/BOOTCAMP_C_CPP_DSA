#include <stdio.h>
int* fun(int x,int y){
	printf("%d\n",x+y);
	int val;
	val = x+y;
	printf("Val : %d\n",val);
	return &val;
}

void main(){
	int *ptr = fun(10,20);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}

// SEGMENTATION FAULT

#include <stdio.h>

void fun(int x){
	printf("%d\n",x);
	fun(--x);
}

void main(){
	fun(10);
}

// SEGMENTATION FAULT AFTER PROCESS MEMORY FULL

#include <stdio.h>

void fun(){
	fun();
}

void main(){
	fun();
}

// SEGMENTATION FAULT AFTER PROCESS MEMORY FULL

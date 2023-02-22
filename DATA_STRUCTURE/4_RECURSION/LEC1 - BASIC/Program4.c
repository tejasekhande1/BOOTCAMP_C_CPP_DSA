// SUM OF FIRST N NATURAL NUMBER

#include<stdio.h>

int sumNum(int x){
	static int sum = 0;
	sum = sum + x;
	if(x > 1){
		sumNum(--x);
	}
	return sum;
}

void main(){
	int ret = sumNum(10);
	printf("%d\n",ret);
}

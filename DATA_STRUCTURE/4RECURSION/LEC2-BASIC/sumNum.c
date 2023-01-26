#include <stdio.h>

int sumNum(int num){
	if(num == 0){
		return 0;
	}else if(num == 1){
		return 1;
	}
	return sumNum(num-1)+num;
}

void main(){
	int ret = sumNum(10);
	printf("%d\n",ret);
}

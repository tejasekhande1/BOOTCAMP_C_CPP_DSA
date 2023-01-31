#include <stdio.h>
int countZero(int n){
	if(n == 0){
		return 1;
	}
	if((n>=1 && n<=9) || (n<=-1 && n>=-9)){
		return 0;
	}
	if(n % 10 == 0){
		return 1 + countZero(n/10);
	}else{
		return countZero(n/10);
	}
}
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	int ret = countZero(n);
	printf("Count : %d\n",ret);
}

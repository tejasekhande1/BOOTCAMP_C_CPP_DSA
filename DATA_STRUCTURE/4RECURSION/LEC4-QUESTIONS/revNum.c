#include <stdio.h>
int revNum(int n,int rev){
	if((n>=1&&n<=9) || (n<=-1 && n>=-9))
		return rev*10+n;
	int last = n%10;
	revNum(n/10,rev*10+last);
}
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	int ret = revNum(n,0);
	printf("Reversed : %d\n",ret);
}

#include <stdio.h>
int countStep(int n){
	if( n == 0)
		return 0;
	if(n % 2 == 0){
		return 1+countStep(n/2);
	}else{
		return 1+countStep(n-1);
	}
}
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	int ret = countStep(n);
	printf("Step-Count : %d\n",ret);
}

#include <stdio.h>

void main(){

	int x=0,sum=0;
	printf("Enter no:");
	scanf("%d",&x);

	for(int i = 1; i <= x; i++){
		if(i % 5 ==0){
			sum = sum + i;
		}	
	}
	printf("%d is a sum of divisiable by 5 in range of %d\n",sum,x);
}

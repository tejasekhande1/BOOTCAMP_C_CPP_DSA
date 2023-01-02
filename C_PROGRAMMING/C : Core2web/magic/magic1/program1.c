/* To print all the divisors of given  number*/
#include<stdio.h>
void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("The divisors of the number %d is \n",num);
	for(int i=1;i<=num;i++){
		if (num % i == 0){
			printf("%d ",i);
		}
	}printf("\n");
}

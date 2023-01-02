/* To count the total digits in the given number*/
#include<stdio.h>
void main(){
	int num,rem;
	printf("Enter number\n");
	scanf("%d",&num);
	while(num!=0){
		rem = num % 10;
		num = num / 10;
		printf("%d",rem);
	}
}

#include <stdio.h>
void main(){
	int x;
	printf("Enter Number : \n");
	scanf("%d",&x);

	if( x > 0){
		printf("%d is POSITIVE Number.\n",x);
	}else{
		printf("%c is NEGATIVE Number.\n",(int)x);
	}
}

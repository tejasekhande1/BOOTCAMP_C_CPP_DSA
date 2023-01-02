#include <stdio.h>
void  add_sub(int a,int b, int *add , int *sub){

	*add = a+b ;
	*sub = a-b ;
}

void main(){
	
	int a = 10;
	int b = 5 ;
	int sub , add ;
	printf("%d %d\n",a,b);
	add_sub(a,b,&add,&sub);
	printf("%d %d\n",add,sub);
}

// In one function we can access multiple values only by pointer

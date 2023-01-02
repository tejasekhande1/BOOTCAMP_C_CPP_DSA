
// ARRAY OF FUNCTION POINTER : 

#include <stdio.h>
void add(int a,int b){
	printf("%d\n",a+b);
}
void sub(int a,int b){
	printf("%d\n",a-b);
}
void div(int a,int b){
	printf("%d\n",a/b);
}
void mul(int a,int b){
	printf("%d\n",a*b);
}
void main(){
	void (*ptr[])(int,int)= {add,sub,div,mul};
	for(int i=0 ; i<4 ; i++){
		ptr[i](30,20);
	}
	
}

/*
50
10
1
600
*/

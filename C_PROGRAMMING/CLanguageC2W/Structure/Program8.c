#include <stdio.h>
void fun(int x,int y,int *ans,int *sub){
	*ans = x + y;
	*sub = x - y;
}
void main(){
	int add = 0,sub=0;
	int x = 10;
	int y=20;
	fun(x,y,&add,&sub);
	printf("%d\n",add);
	printf("%d\n",sub);
}

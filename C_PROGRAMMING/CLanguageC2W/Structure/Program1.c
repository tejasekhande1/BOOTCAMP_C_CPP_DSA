#include <stdio.h>
struct Demo{
	int x;
	int y;
};
void main(){
	struct Demo obj1 = {10,20};
	printf("%p\n",obj1);                 // 0x0000000a
	printf("%p\n",&obj1);		     // 0x100
	printf("%p\n",&obj1.x);		     // 0x100
}


// POINTER TO A STRUCTURE

#include <stdio.h>
struct Demo{
	int x;
	int y;
};
void main(){
	struct Demo obj1 = {10,20};
	struct Demo *obj2 = &obj1;
	(*obj2).x = 10;
	obj2->y = 20;
	printf("%d\n",obj2->x);
	printf("%d\n",obj2->y);
}

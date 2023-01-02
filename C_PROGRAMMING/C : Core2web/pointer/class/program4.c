#include<stdio.h>
void main(){
	double x = 30.50;
	char ch = 'A';
	double *ptr1 = &x;
	char *ptr2 = &ch;
	printf("%p\n",&x);
	printf("%p\n",&ch);
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%lf\n",*(ptr1));
	printf("%c\n",*(ptr2));
}

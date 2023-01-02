#include<stdio.h>
void main(){
	char ch1='a',ch2='b',ch3='c';
	char *ptr= &ch1;
	printf("%p\n",ptr);
	printf("%c\n",*ptr);

	printf("%p\n",ptr);
	printf("%c\n",*(ptr+1));

	printf("%p\n",ptr);
	printf("%c\n",*(ptr+2));
}

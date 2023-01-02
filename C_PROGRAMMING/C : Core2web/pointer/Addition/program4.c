#include<stdio.h>
void main(){
	char ch='A';
	char *ptr = &ch;
	printf("%p\n",ptr + ch);
	printf("%d\n",*(ptr+ch));
}

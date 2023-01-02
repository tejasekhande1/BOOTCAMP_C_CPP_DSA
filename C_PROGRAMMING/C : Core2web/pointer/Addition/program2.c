#include<stdio.h>
void main(){
	char ch1='A',ch2='B';
	char *ptr1 = &ch1;
	char *ptr2 = &ch2;
	printf("%d\n",*ptr1 + *ptr2);
	printf("%c\n",*ptr1 + *ptr2);
}

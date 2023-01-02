//input of array of function pointer

#include <stdio.h>
#include <stdlib.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void dive(int,int);

void main(){

	void (*arrptr[4]) (int,int) = {add,sub,mul,dive};
	int ch,a,b ;

	printf("Enter Values of A and B : \n");
 	scanf("%d %d",&a,&b);

	printf("Enter Your Choice : \n");
	printf("0.Add\n");
	printf("1.Sub\n");
	printf("2.Mul\n");
	printf("3.Div\n");
	scanf("%d",&ch);


	if (ch < 0 || ch > 3){
		printf("Wrong Choice : \n");
		exit(0);
	} else {
		arrptr[ch](a,b);
	}

}

void add(int x , int y){
	printf("%d\n", x+y);
}
void sub(int x , int y){
	printf("%d\n", x-y);
}
void mul(int x , int y){
	printf("%d\n", x*y);
}
void dive(int x , int y){
	printf("%d\n", x/y);
}

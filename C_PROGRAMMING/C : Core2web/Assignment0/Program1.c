
// TAKE A INPUT FROM USER AND PRINT THE SIZE OF THAT VARIABLE

#include<stdio.h>
void main(){
	int num;
	printf("Enter Integer value : \n");
	scanf("%d",&num);
	char ch;
	printf("Enter Character value : \n");
	scanf(" %c",&ch);
	float f;
	printf("Enter Float value : \n");
	scanf("%f",&f);
	double d;
	printf("Enter Double value : \n");
	scanf("%lf",&d);

	printf("Size of num : %ld\n",sizeof(num));	
	printf("Size of ch : %ld\n",sizeof(ch));	
	printf("Size of f : %ld\n",sizeof(f));	
	printf("Size of d : %ld\n",sizeof(d));	
}

// WAP TO CHECK GIVEN INPUTS ARE PGT

#include <stdio.h>

void main(){
	int a,b,c;
	printf("Enter First Side Of Traingle : \n");
	scanf("%d",&a);
	printf("Enter Second Side Of Traingle : \n");
	scanf("%d",&b);
	printf("Enter Hypoteneous Of Traingle : \n");
	scanf("%d",&c);

	if(a < 0 || b < 0 || c < 0){
		printf("User Entered Negative Value\n");
	}else if(a*a+b*b == c*c){
		printf("%d %d %d is Pythagorous Triplet\n",a,b,c);
	}else{
		printf("%d %d %d is NOT Pythagorous Triplet\n",a,b,c);
	}
}

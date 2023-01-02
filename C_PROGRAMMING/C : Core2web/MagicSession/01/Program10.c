
// FIBONACCI SERIES

#include <stdio.h>
void main(){
	int r=0,x=0,y=1;
	printf("Enter No Of Rows : \n");
	scanf("%d",&r);

	for(int i=1 ; i<=r ; i++){
		for(int j=1 ; j<=i ; j++){
			printf("%d\t",x);
			y = x+y;
			x = y-x;
		}

		printf("\n");
	}
}

#include <stdio.h>

void main(){
	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);
	
	int n = 1 ;
	for(int i=1 ; i<=x ; i++){
		for(int j=1 ; j<=x ;j++){
			printf("%d\t",n*n-1);
			n++;	
		}

		printf("\n");
	}
}

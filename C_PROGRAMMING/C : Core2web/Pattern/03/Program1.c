#include <stdio.h>
void main(){
	int x;
	printf("Enter No of Rows : ");
	scanf("%d",&x);

	for(int i=1 ; i<=x ; i++){
		int n = 1;
		for(int j=1 ; j<=x ;j++){
			printf("%d\t",n);
			n = n+i;
		}

		printf("\n");
	}
}

/*
 * 1 2 3 4
 * 1 3 5 7
 * 1 4 7 10
 * 1 5 9 13
 */

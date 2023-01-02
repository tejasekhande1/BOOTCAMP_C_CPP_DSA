#include <stdio.h>

void main(){
	int y;
	printf("Enter No Of Rows : ");
	scanf("%d",&y);

	for(int i=0 ; i<y ; i++){	
		int n = y+i;
		for(int j=1 ; j<=y ; j++){
			printf("%d ",n);
			n--;
		}
		printf("\n");	
	}
}

/*
 * 4 3 2 1
 * 5 4 3 2
 * 6 5 4 3
 * 7 6 5 4
 */

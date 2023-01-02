#include <stdio.h>

void main(){
	int x;
	printf("Enter No Of Rows : ");
	scanf("%d",&x);
	
	for(int i=x ; i>=1 ;i--){
		for(int j=1 ; j<=x ; j++){
			printf("%d\t",i);
		}
		printf("\n");
	}

}

/*
 * 4 4 4 4
 * 3 3 3 3
 * 2 2 2 2
 * 1 1 1 1
 */

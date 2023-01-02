#include <stdio.h>
void main(){

	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);

	for(int i = 0 ; i<x ; i++){
		for(int j=0 ; j<x ; j++){
			printf("%c\t",64+x+i-j);
		}
		printf("\n");
	}
}

#include <stdio.h>

void main(){
	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);
		
	for(int i=0 ; i<x ; i++){
		int v = x;
		for(int j=0 ; j<x ;j++){
			if(i % 2 == 1){
				printf("%c%d\t",65+j,j+1);
			}else{
				printf("%c%d\t",64+x-j,v--);
			}	
		}

		printf("\n");
	}
}

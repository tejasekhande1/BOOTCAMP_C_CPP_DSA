#include <stdio.h>

void main(){
	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);

	for(int i=1 ; i<=x ; i++){
		for(int j=1 ; j<=x ;j++){
			if(i % 2 == 1){
				printf("= ");
			}else{
				printf("$ ");
			}
		}

		printf("\n");
	}
}

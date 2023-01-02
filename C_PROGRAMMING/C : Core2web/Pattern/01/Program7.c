#include <stdio.h>

void main(){
	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);
	
	int n = 1;
	for(int i=1 ; i<=x ; i++){
		for(int j=1 ; j<=x ;j++){
			if(i % 2 == 1){
				printf("%d\t",n);
				n++;
			}else{
				printf("%d\t",n*n);
				n++;
			}
		}

		printf("\n");
	}
}

#include <stdio.h>
void main(){
	int row,x=1;
	printf("Enter Row : ");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
		for(int j=1 ; j<=row ; j++){
			if(x % 2 == 1){
				printf("%d\t",x);
			}
			else{
				printf("%d\t",x*x);
			}

			x++;
		}

		printf("\n");
	}
}

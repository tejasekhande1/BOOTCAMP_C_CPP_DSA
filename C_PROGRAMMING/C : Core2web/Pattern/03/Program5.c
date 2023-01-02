#include <stdio.h>
void main(){
	int r,x=1;
	printf("Enter No Of Rows: ");
	scanf("%d",&r);

	for(int i=1 ; i<=r ; i++){
		for(int j=1 ; j<=r ; j++){
			if(x % 2 == 1)
				printf("%d\t",x);
			else
				printf("%d\t",x*x);

			x++;
		}

		printf("\n");
	}
}

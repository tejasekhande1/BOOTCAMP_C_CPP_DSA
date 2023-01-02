#include <stdio.h>
void main(){
	int r ;
	printf("Enter No of Rows : ");
	scanf("%d",&r);

	int x = r*r;
	int y = 64+r*r;
	for(int i=1 ; i<=r ;i++){
		for(int j=1 ; j<=r ;j++){
			if(i%2 != 0)
				printf("%d\t",x);
			else
				printf("%c\t",y);

			x--;
			y--;
		}

		printf("\n");
	}
}

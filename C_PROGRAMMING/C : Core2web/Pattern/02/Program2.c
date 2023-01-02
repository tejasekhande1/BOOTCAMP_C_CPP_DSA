#include <stdio.h>
void main(){
	int row;
	printf("Enter Rows : ");
	scanf("%d",&row);
	for(int i=1 ; i<=row ; i++){
	
		int x = 64+row;
		int y = row;

		for(int j=1 ; j<=row ; j++){
			if(i%2 == 0){
				printf("%c\t",x);
				x--;
			}else{
				printf("%d\t",y);
				y--;
			}
		}

		printf("\n");
	}
}

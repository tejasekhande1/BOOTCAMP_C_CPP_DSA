
#include <stdio.h>
void main(){
	int y,x = 64;
	printf("Enter Rows : ");
	scanf("%d",&y);	

	for(int i=1 ; i<=y ; i++){
		for(int j=1 ; j<=y ; j++){
			printf("%c\t",x+y*y);
			x--;
			
		}
		printf("\n");
	}
}

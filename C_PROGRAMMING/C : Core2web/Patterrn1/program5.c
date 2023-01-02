#include <stdio.h>

void main(){
	int row ;
	printf("ENTER ROWS : ");
	scanf("%d",&row);

	char ch = 'A';
	for(int i=1 ; i<=row ; i++){
		char ch1 = ch;
		for(int j=1 ; j<=4 ; j++){
			printf("%c ",ch1);
			ch1++;
		}

		printf("\n");
		ch++;
	}

}

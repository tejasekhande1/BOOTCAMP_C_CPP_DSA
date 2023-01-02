#include <stdio.h>
void main(){
	for(int i=1 ; i<=5 ; i++){
		int x = i;
		for(int j=1 ; j<=5 ; j++){
			printf("%d ",x);
			x++;
		}

		printf("\n");
	}
}

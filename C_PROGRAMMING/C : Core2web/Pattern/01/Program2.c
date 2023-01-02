
#include <stdio.h>
void main(){
	for(int i=1 ; i<=4 ; i++){
		int x = 1;
		char y = 'A';
		for(int j=1 ; j<=4 ; j++){
			if(i % 2 == 1 ){
				printf("%d ",x);
				x++;
			}else{
				printf("%c ",y);
				y++;
			}
		}
		
		printf("\n");
	}
}

/*
 * 	1 2 3 4
 * 	A B C D
 * 	1 2 3 4
 * 	A B C D
 */

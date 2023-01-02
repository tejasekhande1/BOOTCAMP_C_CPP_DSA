
// WAP TO PRINT FIRST EVEN NUMBERS BETWEEN 1-100

#include <stdio.h>
void main(){
	for(int i= 1 ; i<=100 ; i++){
		if( i % 2 == 0)
			printf(" %d ",i);

		if( i % 10 == 0)
			printf("\n");
	}
}

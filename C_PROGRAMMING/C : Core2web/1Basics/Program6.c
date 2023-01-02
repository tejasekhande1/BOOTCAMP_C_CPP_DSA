
// WAP TO PRINT REVERSE NUMBERS BETWEEN 1-100

#include <stdio.h>
void main(){
	for(int i= 100 ; i>=1 ; i--){
			printf(" %d ",i);

		if( i % 10 == 0)
			printf("\n");
	}
}

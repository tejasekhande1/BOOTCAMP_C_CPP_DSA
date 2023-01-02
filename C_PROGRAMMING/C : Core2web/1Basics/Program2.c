
// WAP TO PRINT FIRST 100 NUMBERS

#include <stdio.h>
void main(){
	for(int i= 1 ; i<=100 ; i++){
		printf(" %d ",i);
		if(i % 10 == 0)
			printf("\n");
	}
}

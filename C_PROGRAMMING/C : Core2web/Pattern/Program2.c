#include <stdio.h>
void main(){
	for(int i=1 ; i<=5 ; i++){
		for(int j=4 ; j>=i ; j--){
			printf("  ");
		}
		for(int j=1 ; j<=i*2-1 ; j++){
			printf("* ");
		}
			printf("\n");

	}
}

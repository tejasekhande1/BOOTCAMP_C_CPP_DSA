#include <stdio.h>
void main(){
	for(int i=1 ; i<=5 ; i++){
		int a = 1;
		for(int j=4 ; j>=i ; j--){
			printf("  ");
		}
		for(int j=1 ; j<=i ; j++){
			printf("%d  ",a);
			a++;
		}
			printf("\n");

	}
}

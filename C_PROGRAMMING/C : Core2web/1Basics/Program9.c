#include <stdio.h>
void main(){
	int sum = 0;
	for(int i=1 ; i<=10 ; i++){
		if( i % 2 == 1){
			sum = sum + i;
		}
	}

	printf("Addition of ODD nuumber : %d\n",sum);
}

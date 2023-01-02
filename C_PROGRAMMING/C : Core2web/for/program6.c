#include <stdio.h>

void main(){

	int x = 0,count = 0; 
	printf("Enter num:");
	scanf("%d",&x);
	
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			count++;
		}
	}
	printf("%d\n",count);
}

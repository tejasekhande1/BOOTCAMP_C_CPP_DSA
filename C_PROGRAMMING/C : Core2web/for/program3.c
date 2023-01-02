#include <stdio.h>

void main(){
	
	int x =0;
	printf("Enter number:");
	scanf("%d",&x);


	printf("below number is a even number in range of : %d\n",x);
	for(int i = x-1; i >= 1; i--){
		if(i % 2 == 0){
			printf("%d\n",i);
			}
	}
	printf("below number is a odd number in range of : %d\n",x);
	for(int j = 1; j <= x-1; j++){
		if(j % 2 != 0){
			printf("%d\n",j);
		}
	}
}

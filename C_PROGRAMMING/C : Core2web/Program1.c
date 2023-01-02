#include <stdio.h>
void main(){
	int x = 0;
	printf("Enter Number : \n");
	scanf("%d",&x);
	int temp = x ;

	if(x > 0){
		while(x > 0){
			if(temp % 2 == 1){
				printf("%d ",x);
				x = x-2;
			}else{
				printf("%d ",x);
				x--;
			}
		}
	}
}

#include <stdio.h>
void main(){
	int x;
	printf("Enter Row : ");
	scanf("%d",&x);

	for(int i=1 ; i<=x ;i++){
		for(int j=1 ; j<=x ;j++){
			if(j % 2 == 0){
				printf("%c\t",63+i+j);
			}else{
				printf("%c\t",95+i+j);
			}
		}
		printf("\n");
	}
}

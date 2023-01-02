#include <stdio.h>
void main(){
	int r;
	printf("Enter No of Rows : ");
	scanf("%d",&r);
	for(int i=1 ; i<=r ;i++){
		int x=r-1;
		char y='a'; 
		for(int j=1 ; j<=r ; j++){
			if((i % 2 == 0 && j % 2 ==0)||(i % 2 != 0 && j % 2 != 0)){
				printf("%d\t",x);
			}else{
				printf("%c\t",y);
			}

			x--;
			y++;
		}
		printf("\n");
	}
}

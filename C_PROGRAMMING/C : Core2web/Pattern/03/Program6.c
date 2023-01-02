#include <stdio.h>
void main(){
	int x;
	printf("Enter No Of Rows : ");
	scanf("%d",&x);

	int count = 1;
	for(int i=1 ; i<=x ; i++){
			if(count == 1){
				for(int j=1 ; j<=x ; j++){
					printf("@\t");
				}
				count++;
			}else if(count == 2){
				for(int j=1 ; j<=x ; j++){
					printf("$\t");
				}
				count++;
			}else{
				for(int j=1 ; j<=x ; j++){
					printf("=\t");
				}
				count = 1;
			}

		printf("\n");
	}
}

/*
@ @ @
$ $ $
= = =
*/

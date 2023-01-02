#include <stdio.h>
void main(){
	int x;
	printf("Enter Rows : ");
	scanf("%d",&x);

	for(int i=0 ; i<x ;i++){
		int a = 64+x+i;
		int b = 96+x+i;
		for(int j=0 ; j<x ; j++){
/*			if((i % 2 == 0 && j % 2 == 0) || ( i % 2 != 0 && j%2 != 0))  OR  */
			if((i+j) % 2 == 0)
			{
				printf("%c\t",a);
			}else{
				printf("%c\t",b);
			}
			
			if(i%2 == 0){
				a++;
				b++;
			}else{
				a--;
				b--;
			}
		}

		printf("\n");
	}
}

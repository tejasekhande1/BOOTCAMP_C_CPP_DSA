#include <stdio.h>
void main(){
	int row;
	printf("Enter Row : ");	
	scanf("%d",&row);

	for(int i=1 ; i<=row ;i++){
		int a = 97;
		int b = row ;
		for(int j=1 ; j<=row ; j++){
			if(j % 2 == 0){
				printf("%c\t",a);
				a++;
			}else{
				printf("%d\t",b);
				b--;
			}
		}
		printf("\n");
	}
}

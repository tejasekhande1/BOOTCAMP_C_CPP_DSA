/* D e F g
   e D c B
   F g H i
   g F e D
   */
#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);
	char ch1 = 64 + row;
	char ch2 = 96 + row;
	for(int i=1;i<=row;i++){
		char ch3 = ch1;
		char ch4 = ch2;
		for(int j=1;j<=row;j++){
			if(i%2 == 0){
				if(j%2 == 0){
					printf("%c ",ch3);
				}else{
					printf("%c ",ch4);
				}ch3-- ;
				ch4--;
			}else{
				if(j%2 == 0){
					printf("%c ",ch4);
				}else{
					printf("%c ",ch3);
				}ch3++;
				ch4++;
			}
		}printf("\n");
		ch1++;
		ch2++;
	}
}


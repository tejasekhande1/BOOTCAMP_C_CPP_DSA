/* 
 0
 1 1
 2 3 5 
 8 13 21 34
 */
#include<stdio.h>
void main(){
	int row,a=0,b=1,c;
	printf("Enter rows\n");
	scanf ("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			if(i==1 && j==1){
				printf("%d ",a);
			}else if(i==2 && j==1){
				printf("%d ",b);
			}else{
				c=a+b;
				a=b;
				b=c;
				printf("%d ",c);
			}
		}printf("\n");
	}
}

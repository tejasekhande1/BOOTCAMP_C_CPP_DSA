/* To print all the composite number between the given range*/
#include<stdio.h>
void main(){
	int start,end ;
	printf("Enter starting number\n");
	scanf("%d",&start);
	printf("Ending number\n");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int flag = 0;
		for(int j=2;j<i;j++){
			if(i%j == 0){
				flag = 1;
			}
		}if(flag == 1){
			printf("%d ",i);
		}
	}
}

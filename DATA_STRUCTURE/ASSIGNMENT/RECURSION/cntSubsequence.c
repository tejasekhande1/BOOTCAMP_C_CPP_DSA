#include <stdio.h>

int subSequence(char str[],int n,int i,int j){
	if(i >= n) return 0;

	if(j>=n){
		i=i+1;
		j=i+1;
	}

	if(str[i] == 'A' && str[j] == 'G')
		return 1+subSequence(str,n,i,j+1);
	else
		return subSequence(str,n,i,j+1);
}

void main(){
	char str[] = "ABCGAG";
	int n = 6;
	int ret = subSequence(str,n,0,1);
	printf("Count : %d\n",ret);
}

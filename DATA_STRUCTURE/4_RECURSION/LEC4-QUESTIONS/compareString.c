#include <stdio.h>
#include <stdbool.h>
bool compareString(char str1[],char str2[],int n){
	if(n < 0){
		return true;
	}
	if(str1[n] != str2[n]){
		return false;
	}
	return compareString(str1,str2,n-1);
}
void main(){
	int n;
	printf("Enter Size of String : ");
	scanf("%d",&n);
	getchar();
	char str1[n];
	char str2[n];
	char ch;
	int i=0;
	puts("Enter 1st String");
	while(i != n && ((ch = getchar()) != '\n')){
			str1[i++] = ch;
	}

	i=0;
	puts("Enter 2nd String");
	getchar();
	while(i != n && ((ch = getchar()) != '\n')){
			str2[i++] = ch;
	}
	bool ret = compareString(str1,str2,n-1);
	printf("%d\n",ret);
}

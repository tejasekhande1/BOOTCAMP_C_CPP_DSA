#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char arr[],int start,int end){
	if(start >= end){
		return true;
	}
	if(arr[start] != arr[end]){
		return false;
	}
	return isPalindrome(arr,start+1,end-1);
}

void main(){
	int n = 5;
	char arr[] = "madam";
	bool ret = isPalindrome(arr,0,n-1);
	printf("Ans : %d",ret);
}

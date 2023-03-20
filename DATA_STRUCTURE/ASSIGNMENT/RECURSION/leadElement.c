#include <stdio.h>

static int max;
int size = 6;
int leadElements(int arr[],int i){
	if(i == -1){
		return 0;
	}else{
		if(i == size-1){	
			max = arr[i];	
			printf("%d\n",max);		
		}else{
			if(arr[i] > max){
				max = arr[i];
				printf("%d\n",max);		
			}
		}
		return leadElements(arr,i-1);
	}
}

void main(){
	int arr[] = {16,17,4,3,5,2};
	int n = 6;
	leadElements(arr,n-1);
}

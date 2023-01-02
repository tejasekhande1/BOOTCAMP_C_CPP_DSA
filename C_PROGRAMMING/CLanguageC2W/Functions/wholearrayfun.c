// passing whole array to function


#include <stdio.h>

int passArr(int *arr);

void main(){
int sum = 0 ;
int num= 5 ;
int arr[] = {10,20,30,40,50};

	sum = passArr(arr);
	printf("%d\n",sum);

}

int passArr(int *arr){
	int sum = 0;
	for(int i=0 ; i<5 ; i++){
		sum = sum + *(arr + i);
	}

	return sum ;
	
}

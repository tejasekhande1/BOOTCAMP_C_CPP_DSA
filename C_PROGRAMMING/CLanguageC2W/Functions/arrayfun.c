//passing array to function

#include <stdio.h>

int elePass(int,int);
//int sum = 0 ;
void main(){
	int sum = 0 ;
	int arr[] = {10,20,30,40,50};
	for(int i = 0 ; i<5 ; i++){
		sum = elePass(arr[i],sum);
	}
	printf("%d\n",sum);

}

int elePass(int x,int sum){
	sum = sum + x ;
	return sum ;
}

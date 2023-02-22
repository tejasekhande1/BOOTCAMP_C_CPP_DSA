// NEAR DICEMBER INTERNSHIP --> GOOGLE,AMAZON,MICROSOFT,UBER
// SKIP LIST / TRIES DS / TERBARY SEARCH / FIBONACCI SEARCH ----> SEARCH ON GOOGLE
// SEARCHING ---> 1] LINEAR SEARCH (SEARCH EVERY ELEMENT) 2] BINARY SEARCH(BEST SEARCH WITH TIME COMPLEXITY)

// SEARCH AN ELEMENT IN AN ARRAY USING LINEAR SEARCH : ARRAY CHI SIZE MUST BE FIND IN MAIN BCOZ IF WE PASS ADDRESS THEN THE CONSIDER ARRAY AS POINTER

#include <stdio.h>

int linearSearch(int arr[],int x,int len){

	for(int i=0 ; i < len ; i++){
	
		if( arr[i] == x ){
			return i;
		}
	}

	return -1;
}

void main(){

	int arr[] = {25,13,7,11,24,5,14,17};
	int num;

	int len = sizeof(arr)/sizeof(int);

	printf("Enter Your Number : ");
	scanf("%d",&num);

	int index = linearSearch(arr,num,len);

	if(index != -1)
		printf("Element Found At Index : %d\n",index);
	else
		printf("Element is NOT Found");

}

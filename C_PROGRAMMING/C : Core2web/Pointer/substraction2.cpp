// pointer - pointer

#include <iostream>
using namespace std ;

int main(){
	int arr[] = {10,20,30,40,50};	

	int *ptr1 = &(arr[1]);
	int *ptr2 = &(arr[4]);

	cout << *ptr1 <<endl;
	cout << *ptr2 <<endl;

//	int a = ptr2 - ptr1 ;  // 3
	int a = ptr1 - ptr2 ; // -3

	cout << a <<endl;

	return 0 ;
}

// 20
// 50
// 3
//
// note : pointer - pointer he operation fkt array varti apply hot
//      2) ani output he tya don array madhle distance display karta 

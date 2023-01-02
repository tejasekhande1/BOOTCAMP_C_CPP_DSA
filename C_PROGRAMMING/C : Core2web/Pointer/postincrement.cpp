// post increment

#include <iostream>
using namespace std ;
int main(){

	int arr[] = {10,20,30,40,50};
	int *ptr = &(arr[1]);

	cout << *ptr <<endl;

	int *ansptr = ptr++ ;

	cout<< ansptr <<endl;
	cout <<*ansptr <<endl;
	cout<< *ptr <<endl;

	return 0 ;
}

// 20
// address
// 20
// 30
//

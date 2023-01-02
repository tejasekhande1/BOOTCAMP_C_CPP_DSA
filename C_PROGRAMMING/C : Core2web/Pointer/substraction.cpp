// pointer - int

#include <iostream>
using namespace std ;

int main(){
	int arr[] = {10,20,30,40,50};

	int *ptr = &(arr[1]);
	cout<< *ptr <<endl;

	ptr = ptr - 1 ;
	cout <<*ptr <<endl;
	return 0 ;
}

// 20
// 10

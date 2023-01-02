#include <iostream>
using namespace std ;

	int main(){
	const int a = 10 ;
	int b = 20 ;

	const int *ptr = &a ;  // const int *const ptr = &a
        cout<< *ptr <<endl;
     //  *ptr = &b ;
     
	cout << *ptr <<endl;
	
		return 0 ;
	}

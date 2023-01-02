#include <iostream>
using namespace std ;

int main(){
	int x = 10 ;
	int *iptr = &x ;
	void *vptr = &x ;

	cout << &x << endl;
	cout << vptr << endl;
	cout << iptr << endl;
	
//	cout << *vptr << endl;                  // void pointer cannot be dereference without condition
	cout << *iptr << endl;

	return 0 ;
}

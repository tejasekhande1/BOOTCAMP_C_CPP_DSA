#include <iostream>
using namespace std ;

int main(){
	int x = 10 ;
	int *ptr = &x ;
	int **ptr1 = &ptr ;

	cout << *ptr << endl;
	cout << **ptr1 << endl;
	cout << ptr << endl;
	cout << ptr1 << endl;

	return 0 ;
}

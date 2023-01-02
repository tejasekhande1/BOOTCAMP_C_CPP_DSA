#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int *ptr1 = arr ;
	int *ptr2 = &arr[0] ;

	cout << ptr1 <<endl;
	cout << ptr2 << endl;
	
	ptr1++ ;
	ptr2++ ;

	cout << *ptr1 <<endl;
	cout << *ptr2 << endl;
 
	return 0 ;
}

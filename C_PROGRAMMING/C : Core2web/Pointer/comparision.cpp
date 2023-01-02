// comparision of pointer

#include <iostream>
using namespace std ;
int main(){

	float arr[] = {10.5,11.5,12.5,13.5,14.5};
	float *ptr1 = &(arr[2]);
	float *ptr2 = &(arr[4]);
	int a = (ptr1 == ptr2); // 0
	int b = (ptr1 != ptr2);  // 1
	int c = (ptr1 <= ptr2); // 1
	int d = (ptr1 >= ptr2);  // 0

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	return 0 ;
}

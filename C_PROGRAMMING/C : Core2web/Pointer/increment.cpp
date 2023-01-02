// pre increment

#include <iostream>
using namespace std ;
int main(){
	int arr[] = {10,20,30,40,50};
	int *ptr = &(arr[1]);
	int *ansptr = ++ptr ;

	cout<< ansptr <<endl;
	cout <<*ansptr <<endl;
	cout<< *ptr <<endl;

	return 0 ;
}

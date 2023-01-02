#include <iostream>
using namespace std;

int main(){
	int x = 10 ;
	void *ptr = &x ;

	cout<< *(int*)ptr <<endl;    // we can dereference void pointer with this condition

	return 0 ;
}

#include <iostream>
using namespace std ;

int main(){
	char carr[5] = {'A','B','C','D','E'};
//	char *cptr = carr;
//	int *iptr = &(carr[0]) ;

	cout << *(cptr+1) <<endl;
//	cout << *(iptr+1) <<endl;
	
	cout << &(carr[0]) <<endl;
	cout << iptr <<endl;

	return 0 ;
}

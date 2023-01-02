#include <iostream>
using namespace std;

int main(){
	int iarr[] = {10,20,30,40,50};
	char carr[] = {'A','B','C','D'};

	void *iptr = iarr ;
	void *cptr = carr ;

	cout << *(int*)iptr << endl;
	cout << *(char*)cptr << endl;

	iptr = (int*)iptr + 1 ;
	cptr = (char*)cptr + 1 ;

	cout<< *(int*)iptr <<endl;
	cout<< *(char*)cptr <<endl;

	return 0 ;
}

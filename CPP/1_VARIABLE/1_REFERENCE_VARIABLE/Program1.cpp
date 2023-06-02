#include <iostream>
int main(){
	int x = 10;
	int &y = x;		// REFERENCE VARIABLE MUST BE INITIALIZED WITH SPECIFIC VALUE

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;

	return 0;
}

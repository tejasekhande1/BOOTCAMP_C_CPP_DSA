#include <iostream>
int main(){
	const int x = 10;
	int *ptr = &x;
	std::cout << x <<std::endl;
	std::cout << *ptr <<std::endl;

	*ptr = 20;
	std::cout << x <<std::endl;
	std::cout << *ptr <<std::endl;
	
	return 0;
}

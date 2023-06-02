
#include <iostream>

int main(){

	int x = 10;
	std::cout<<x<<std::endl;

	int y(20);			// direct initialization
	std::cout<<y<<std::endl;
	
	int z {30};			// uniform initializer V11
	std::cout<< z <<std::endl;

	return 0;
}

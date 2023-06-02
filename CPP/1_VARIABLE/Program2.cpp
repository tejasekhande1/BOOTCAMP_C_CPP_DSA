#include<iostream>

int main(){
	int x = 10;
	int y = 20.5f;

	std::cout<< x << " " << y <<std::endl;

	int a {10};
	int b {20.5f};				// ERROR : NEED EXACT DATA TYPE TO STORE VALUES

	std::cout<< a << " " << b <<std::endl;

	return 0;
}

/*
 * VARIABLE SHADOWING :
	1] LOCAL VARIABLE SHADOWING :
	2] GLOBAL VARIABLE SHADOWING :
*/

#include <iostream>

int x = 10;
int main(){
	int x = 20;
	std::cout<< x <<std::endl;
	std::cout<< ::x <<std::endl;		// ACCESS GLOBAL VARIABLE
	return 0;
}

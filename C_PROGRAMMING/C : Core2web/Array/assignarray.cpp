// asigning array to an array

#include <iostream>
using namespace std ;

int main(){
	int array1[5] = {10,20,30,40,50};
	int array2[5];
	
//	array2 = array1 ;     error here because here array2 means index of first number means constant value there or cant add one address into another address
	array2[1] = array1[1] ;

	cout<< array1[1] << " " << array1[2] <<endl;
	cout << array2[1] <<" " << array2[2] << endl;

	return 0 ;
}




// note =  array's name is address of this first element  array1 == &array1[0]       that means array's index is '0'
//         array's name is address of itself        ie. &array1 = array1
//
//         = : assign   == : comparisn
// one arrays data can be copied into another array by pointer
// for high data copie use foor loop
// 	for(int i=0 ; i<num ; i++){
// 		array2[i] = array2[i]
// 		}


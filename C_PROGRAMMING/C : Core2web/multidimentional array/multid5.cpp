#include <iostream>
using namespace std ;
int main(){
	
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	cout<< &(arr[0][0]) << endl;              
 	cout<< &(arr[1][2]) << endl;              
	cout<< arr << endl;                       // 100 gate address
	cout<< arr[0] << endl;                    // 100 chaawl address
	cout<< arr[1][2] << endl;                // 8  ghar

	return 0 ;
}

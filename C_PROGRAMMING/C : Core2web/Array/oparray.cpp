//operation array like char.int,float.....
//garbage value give by array because storage is depend on class
// write this code in cpp


#include <iostream>
using namespace std;

	int main(){
//		int iarray[5] = {1,2,3,4,5};                     		 // size = 20 bytes

//		char carray[2+3] = {'a','b','c'};          			      // size = 5 bytes

		int size ;							// in C this is error.....also errror for input value   because size and subscript put at one time:
		cout<<"Size Of Array is :"<<endl;
		cin >> size ;
		float farray[size]={10.5f,20.5f,30.5f,40.5f};    		   // size = 20 bytes
		
		cout<<"Enter Elements of Array :"<<endl;
	
/*		for(int i = 0 ; i<5 ; i++){
		cout << iarray[i] << " "<<endl;
		}
	
		for(int i=0 ; i<5 ; i++){
		cout << carray[i] << " "<<endl;
		}
*/	
		for(int i=0 ; i<size ; i++){
		cout<<farray[i] ;
		}

	return 0 ;
	}

#include <iostream>
using namespace std ;
	int main() {
		int n ;
		cout<<"Enter Size Of Array "<<std::endl;
		cin >> n ;
		
		int array[n];

		for(int i=0; i<n ; i++){
			cout<<"Enter your Numbers "<<endl;
			cin >> array[i];
		}

		for(int i = 0 ; i<n ; i++){
			cout<< array[i]<< "  ";
		}

		return 0 ;
	}

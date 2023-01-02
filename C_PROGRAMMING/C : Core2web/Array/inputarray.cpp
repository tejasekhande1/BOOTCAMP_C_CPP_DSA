// take input from user for array
// print array elements
// also sum of array's elements
// also print small and large number


#include <iostream>
using namespace std ;

int main(){

	int num ;
	int sum= 0 ;
	int max = 0 ;
	
	
	cout<<"Enter Size of Array :"<<endl;  // for take size of array from user
	cin>> num ;

	int stud_age[num];
	cout << "Enter Array Elements :" <<endl;

	for(int i=0 ; i<num ; i++){

		cin>> stud_age[i] ;
	}
	
	for(int i=0 ; i<num ; i++){     // this for loop for output array elements

		cout<< stud_age[i] <<" ";
	}

	cout<<""<<endl;

// for sum of elements  of array numbers

	for(int i=0 ; i<num ; i++){
		sum = sum + stud_age[i];
	
	}

	cout<< "The Sum is "<< sum << endl;
	
	for(int i=0  ; i<num ; i++){		// this loop is for maximum number
		if(stud_age[i] > max)	
			max = stud_age[i];
	}

	cout<< "The maximum Number is "<< max <<endl; 
	
	int min = stud_age[0];
	for(int i=0  ; i<num ; i++){		// this loop is for minimum number
		if(stud_age[i] <  min)
			min = stud_age[i];
	}

	cout<< "The minimum Number is "<< min <<endl; 

	return 0 ;
}

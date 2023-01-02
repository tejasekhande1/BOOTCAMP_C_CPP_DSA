// taake a input as user and show array as well as number which is divisible by 2



#include <iostream>
using namespace std ;

	int main(){
		int num ;
		cout <<"Enter Size of Array : "<<endl;
		cin>> num ;

		int input_Num[num];
		cout<<"Enter Array Elements : "<<endl;

		for(int i=0 ; i<num ; i++){
			cin >> input_Num[i];
		}
	
		for(int i=0 ; i<num ; i++){
			if(input_Num[i]%2 == 0)
			cout<< input_Num[i]<<endl;
		}
		
	
		return 0 ;
	}

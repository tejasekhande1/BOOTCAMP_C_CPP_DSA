#include <iostream>
using namespace std;

 void factNum(int num){
//	int num ;
//	cout<<"Enter Number For Factorial : "<<endl;
//	cin>> num ;

	int fact = 1 ;
	for(int i=1 ; i<=num ; i++){
	fact = fact * i ;
}
	cout<< fact <<endl;

} 

int main(){
	int num ;
	cout<<"Enter Number For Factorial : "<<endl;
	cin>> num ;

	factNum(num);
	
	return 0 ;
}


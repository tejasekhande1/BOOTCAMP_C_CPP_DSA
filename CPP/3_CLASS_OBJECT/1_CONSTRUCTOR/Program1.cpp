#include <iostream>
class Byjus{
	public :
		Byjus(){
			std::cout<<"No-Args Constructor"<<std::endl;
		}
		Byjus(const Byjus& x){
			std::cout<<"Copy Constructor"<<std::endl;
		}

		Byjus fun(Byjus obj){
			return obj;
		}
};

int main(){

	Byjus obj1;
	Byjus obj3(obj1);
	obj1.fun(obj3);
	return 0;
}

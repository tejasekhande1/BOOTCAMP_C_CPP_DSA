#include<iostream>

class Solution{
	public:
		Solution(){
			std::cout<<"Default Constructor"<<std::endl;
		}
		
		Solution(const Solution &ref){
			std::cout<<"Copy Constructor"<<std::endl;
		}

		Solution function(Solution &ref){
			return ref;
		}
};

int main(){
	Solution obj1;
	Solution obj2(obj1);
	Solution obj3 = obj1;
	obj1.function(obj1);
	return 0;
}

#include <stdio.h>
struct pName{
	char pName[20];
	int jerNo;
	float sal;
};
void main(){
	struct pName obj1 = {"Rohit",45,49.25}; 
	struct pName obj2 = {"Virat",18,52.35}; 
	struct pName obj3 = {"KL Rahul",15,43.};

	struct pName arr[] = {obj1,obj2,obj3};
	for(int i=0 ; i<3 ; i++){
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].sal);
	}	
}

/*
Rohit
45
49.250000
Virat
18
52.349998
KL Rahul
15
43.000000
*/

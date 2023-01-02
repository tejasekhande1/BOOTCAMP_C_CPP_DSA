#include <stdio.h>
void main(){
	const int x;
	scanf("%d",&x);                      //	NOT VALID ---> WARNING
	printf("%d\n",x);
}

/*

   COMPILER CHECK CONST VARIABLE AT THE TIME COMPILING 
   AT COMPILING TIME COMPILER CHECKS ONLY SYTAX
   SCANF GIVE VALUE AT RUNTIME

*/

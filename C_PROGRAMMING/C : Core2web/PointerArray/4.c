#include <stdio.h>
// using namespace std ;

void main(){

	char carr[5] = {'A','B','C','D','E'};
	char *cptr = carr;
	int *iptr = carr ;

	printf("%c\n",*(cptr+1) );
	printf("%c\n",*(iptr+1) );
	

//	return 0 ;
}

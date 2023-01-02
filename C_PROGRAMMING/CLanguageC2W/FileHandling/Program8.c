#include <stdio.h>
void main(){
	FILE *fp = fopen("info.txt","w");
	printf("%ld\n",ftell(fp));
	fprintf(fp,"Core2web");
	printf("%ld\n",ftell(fp));        // ftell() --> return type long
	fprintf(fp,"Biencaps");              // append hoil bcoz file close nahi keli	
	rewind(fp);                    // ftell(fp)
	printf("%ld\n",ftell(fp));        // ftell() --> return type long
}

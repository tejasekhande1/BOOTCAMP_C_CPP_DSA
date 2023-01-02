#include <stdio.h>
void main(){
	FILE *fp = fopen("c2w.txt","w");
	fprintf(fp,"Hello");
	fprintf(stdout,"Hello\n");
}

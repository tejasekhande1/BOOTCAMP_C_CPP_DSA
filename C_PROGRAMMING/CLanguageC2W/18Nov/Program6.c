#include<stdio.h>
#include<stdlib.h>

void main(){

	int rows=3,cols=4;
	int *ptr=(int*)malloc(sizeof(int)*rows*cols);

	for(int i=0;i<rows;i++){
	
		for(int j=0;j<cols;j++){

			printf("%d",(ptr+i)+j);
		}
	}
	
	for(int i=0;i<rows;i++){
	
		for(int j=0;j<cols;j++){

			printf("%d",*(ptr+i)+j);
		}
	}

}

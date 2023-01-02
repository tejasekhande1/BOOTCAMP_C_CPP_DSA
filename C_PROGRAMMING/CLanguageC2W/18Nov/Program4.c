#include <stdio.h>
#include <stdlib.h>
void main(){
	int plane = 2;
	int row = 2;
	int col = 3;
	int *arr = (int*)malloc((plane*row*col)*sizeof(int));
	for(int i=0 ; i<plane*row*col ; i++){
		scanf("%d",(arr+i));
	}
	for(int i=0 ; i<row*col*plane ; i++){
		printf("%d\t",*(arr+i));
		if((i+1)%(row*col)==0)
			printf("\n");
		if((i+1)%col==0)
			printf("\n");
	}

	printf("\n");
	free(arr);
}

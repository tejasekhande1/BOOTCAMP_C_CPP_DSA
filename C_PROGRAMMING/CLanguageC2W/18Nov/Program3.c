#include <stdio.h>
#include <stdlib.h>
void main(){
	int row = 2;
	int col = 3;
	int *arr = (int*)malloc((row*col)*sizeof(int)`);
	for(int i=0 ; i<row*col ; i++){
		scanf("%d",(arr+i));
	}
	for(int i=0 ; i<row*col ; i++){
		printf("%d\t",*(arr+i));
		if(i+1 == col)
			printf("\n");
	}	
	printf("\n");
	free(arr);
}

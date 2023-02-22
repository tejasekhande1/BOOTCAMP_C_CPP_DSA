#include <stdio.h>

void rotateArray(int arr[3][3],int n){
	
	printf("\nEntered Elements in Array : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nClockwise Rotation of Array : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=n-1 ; j>=0 ; j--){
			printf("	%d	",arr[j][i]);
		}
		printf("\n");
	}
}

void rotateArrayAnti(int arr[3][3],int n){
	
	printf("\nEntered Elements in Array : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAnti Clockwise Rotation of Array : \n");
	for(int i=n-1 ; i>=0 ; i--){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[j][i]);
		}
		printf("\n");
	}
}
void transposeMatrix(int arr[3][3],int n){

	for(int i=0 ; i<n ; i++){
		int temp = 0;
		for(int j=i+1 ; j<n ; j++){
			temp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = temp;
		}
	}
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[i][j]);
		}
		printf("\n");
	}
} 
void revMatrix(int arr[3][3],int n){
	transposeMatrix(arr,n);
	for(int i=0 ; i<n ; i++){
		int s = 0 , e = n-1,temp = 0;
		while(s<e){
			temp = arr[i][s];
			arr[i][s] = arr[i][e];
			arr[i][e] = temp;
			s++;
			e--;
		}
	}
	
	printf("\nReversed Matrix : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int n;
	printf("Enter Size of Matrix : \n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter Elements in Array : \n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	transposeMatrix(arr,n);
}

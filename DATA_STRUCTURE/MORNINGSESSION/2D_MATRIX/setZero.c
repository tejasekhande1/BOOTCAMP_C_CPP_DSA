#include <stdio.h>
int n;
void setZero(int arr[n][n]){

	for(int i=0 ; i<n ; i++){
		for(int j=i ; j<n ; j++){
			if(arr[i][j] == 0){
				for(int k=0 ; k<n ; k++){
					arr[k][j] = 0;
					arr[i][k] = 0;
				}
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("	%d	",arr[i][j]);
		}
		printf("\n");
	}
}
void main(){
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	setZero(arr);
}

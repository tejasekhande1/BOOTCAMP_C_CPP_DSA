// ARRAY,SUM,QUERIES THEN USED PREFIX ARRAY SUM
#include <stdio.h>
void rangeSum(int arr[],int n,int q){
	for(int i=1 ; i<n ; i++){
		arr[i] = arr[i-1] + arr[i];
	}

	int start,end;
	for(int i=0 ; i<q ; i++){
		printf("Enter Start : ");
		scanf("%d",&start);
		printf("Enter End : ");
		scanf("%d",&end);

		if(start == 0){
			printf("Sum of Range %d %d : %d\n",start,end,arr[end]);
		}else{
			printf("Sum of Range %d %d : %d\n",start,end,arr[end]-arr[start-1]);
		}
	}
}
void main(){
	int n,q;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Number of Queries : ");
	scanf("%d",&q);
	rangeSum(arr,n,q);
}

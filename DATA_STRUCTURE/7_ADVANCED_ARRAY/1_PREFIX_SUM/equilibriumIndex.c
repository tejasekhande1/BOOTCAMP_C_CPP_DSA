// EQILIBRIUM INDEX OF AN ARRAY : 

/* Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
*/

#include <stdio.h>
int equilibriumIndex(int arr[],int n){
	for(int i=1 ; i<n ; i++){
		arr[i] = arr[i-1] + arr[i];
	}

	int left=0,right=0;
	for(int i=0 ; i<n ; i++){
		if(i == 0){
			left = 0;
			right = arr[n-1]-arr[i];
		}else{
			left = arr[i-1];
			right = arr[n-1]-arr[i];
		}

		if(left == right) return i;
	}

	return -1;
}
void main(){
	int n;
	printf("Enter Size of an Array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	printf("Equilibrium Index : %d\n",equilibriumIndex(arr,n));
}

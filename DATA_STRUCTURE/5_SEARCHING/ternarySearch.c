// *TERNARY SEARCH : COMPLEXITY LARGE THAN BINARY SEARCH
// * INTERPOLATION SEARCH :
// -----> IF DIFF BETWEEN TWO ELEMENTS IN ARRAY IS SAME I.E. 10,20,30,40,50(UNIFORM ARRAY) --> ONE ATTEMPT SOLUTION

#include <stdio.h>

int cnt;

int ternarySearch(int arr[],int len,int ele){

	cnt++;

	int start = 0;
	int end = len-1;

	while(start < end){
		int mid1 = start+(end-start)/3;
		int mid2 = end-(end-start)/3;

		if(ele == arr[mid1])
			return mid1;

		if(ele == arr[mid2])
			return mid2;

		if(ele < arr[mid1])
			end = mid1-1;
		else if(ele > arr[mid2])
			start = mid2+1;
		else{
			start = mid1+1;
			end = mid2-1;
		}

		if(start == end && arr[start] == ele)
			return start;
	}
	return -1;
}

void main(){

	int arr[] = {3,6,9,12,15,18,21,24,27,30};
	int len = sizeof(arr);

	int ele;
	printf("Enter Element To Search : \n");
	scanf("%d",&ele);

	int index = ternarySearch(arr,len,ele);

	printf("Total Stack Pushed : %d\n",cnt);

	if(index != -1)
		printf("Element Found At Index : %d\n",index);
	else
		printf("Element is NOT Found\n");

}

// LINEAR SEARCH : IF ARRAY IS UNSORTED
// BINARY SEARCH : IF ARRAY IS SORTED
// TERNARY SEARCH : IF ARRAY IS SORTED
// EXPONTIAL SEARCH : ?

// INTERPOLATION SEARCH : IF DIFF BETWEEN ALL TWO ELEMENTS IS SAME (UNIFORM ARRAY) AND SORTED ARRAY
// FORMULE : int index = (start +(end-start)) * ((ele - arr[start])/arr[end]-arr[start]);
// UNSORTED ARRAY USING INTERPOLATION SEARCH WITH NORMAL AND RECURSION:

#include <stdio.h>

void main(){

	int arr[] = {3,6,9,12,15,18,21,24,27,30};

	int len = sizeof(arr);

	int start = 0;
	int end = len-1;

	int ele;
	printf("Enter Elemenet To Search In Index : ");
	scanf("%d",&ele);

	int index = (start +(end-start)) * ((ele - arr[start])/arr[end]-arr[start]);
	printf("Element Found At Index : %d\n",index);
}

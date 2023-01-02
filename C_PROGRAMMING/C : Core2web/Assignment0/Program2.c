
// PREINCREMENT/POSTINCREMENT

#include <stdio.h>
void main(){
//	int x = 9;
	int x;
	printf("Enter Value : \n");
	scanf("%d",&x);
	int ans = ++x + x++ + ++x;
	printf("Value of ans : %d\n",ans);
	printf("Value of X : %d\n",x);

	int ans1 = ++x + ++x + ++x + ++x ; 
	printf("Value of ans1 : %d\n",ans1);
	printf("Value of X : %d\n",x);
	
	int ans2 = x++ + x++ + ++x + x++ + ++x ; 
	printf("Value of ans2 : %d\n",ans2);
	printf("Value of X : %d\n",x);

	int ans3 = x++ + x++ + x++ + x++ ;
	printf("Value of ans2 : %d\n",ans3);
	printf("Value of X : %d\n",x);
}

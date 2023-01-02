#include <stdio.h>
void main(){
	int ans = 1;
	for(int i=1 ; i<=10 ; i++){
		ans = ans * i;
	}
	printf("Product Of First 10 Numbers : %d\n",ans);
}

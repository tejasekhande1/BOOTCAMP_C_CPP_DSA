#include <stdio.h>

void towerOfHonoi(int n,char *src,char *helper,char *dest){
	if(n == 1){
		printf("Disk %d Transfer From : %s to %s\n",n,src,dest);
		return;
	}

	towerOfHonoi(n-1,src,dest,helper);
	printf("Disk %d Transfer From : %s to %s\n",n,src,dest);
	towerOfHonoi(n-1,helper,src,dest);
}

void main(){
	int n = 2;
	towerOfHonoi(n,"S","H","D");
}

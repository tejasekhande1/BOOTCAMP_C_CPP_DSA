#include <stdio.h>
void main(){
	int x;
	for(int i=10 ; i<=30 ; i++){
		int cnt = 0;
		for(int j=2 ; j<=15 ; j++){
			if(x % j == 0){
				cnt++;
			}

			if(cnt == 0){
				printf("%d\t",i);
			}
		}
	}
}

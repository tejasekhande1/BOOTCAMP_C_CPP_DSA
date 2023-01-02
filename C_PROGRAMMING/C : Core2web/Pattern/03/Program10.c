#include <stdio.h>
void main(){
	char ch = 'D';
	char ch1 = 'e';

	for(int i=1 ; i<=4 ; i++){
		int cnt,cnt1;
		char ch2 = ch;
		char ch3 = ch1;

		for(int j=1 ; j<=4 ; j++){
			if(i % 2 == 1){
				printf("%c\t",ch2);
				ch2--;
				cnt1++;

			}else{
				printf("%c\t",ch3);
				ch3--;
				cnt++;
			}
		} 

		if(cnt > 0){
			ch = ch+2;
		}
		if(cnt1 > 0){
			ch1 = ch1+3;
		}

		printf("\n");
	}
}

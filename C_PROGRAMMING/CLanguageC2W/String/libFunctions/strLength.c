// STRLEN() -----> TO CALCULATE LENGTH OF STRING

#include <stdio.h>
#include <string.h>

void main(){
	char str1[] = {'T','E','J','A','S','\0'};
	char str4[] = {'T','E','J','A','S'};
	char str5[40] = {'T','E','J','A','S'};
	char str2[] = "TEJAS";
	char *str3 = "TEJAS";				// CONSTANT STRING 

	printf("%ld\n",strlen(str1));                  // 5
	printf("%ld\n",strlen(str4));		       // 5
	printf("%ld\n",strlen(str5));		// 10
	printf("%ld\n",strlen(str2));		//5
	printf("%ld\n",strlen(str3));		// 5

	*str3 = 'k';
	printf("%ld\n",strlen(str3));
}

// CONSTANT STRING ALOCATED IN RO-DATA(READ-ONLY DATA) HENCE IF WE TRY TO CHANGE IN RO-DATA IT GIVES
// AN ERROR

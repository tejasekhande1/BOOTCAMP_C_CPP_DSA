#include <stdio.h>
void main(){
//	char *str;                        // CANNOT TAKE INPUT IN THIS STRING
	char str[20];
	printf("Enter Player Name : ");
//	scanf("%s",str);
//	scanf("%[^\n]",str);
	scanf("%[^k]",str);
	printf("|%s|\n",str);
}

/*
1]
Enter Player Name : Tejas
|Tejas|
Enter Player Name : Tejas Ekhande
|Tejas|
2]
Enter Player Name : Tejas Ekhande
|Tejas Ekhande|
3]
Enter Player Name : Tejas Ekhande
|Tejas E|
*/

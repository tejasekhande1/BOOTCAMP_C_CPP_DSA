// String input : scantf();getchar();gets();fgets()


#include <stdio.h>
void main(){

/*	// scanf ------> if we enter (Tejas Ekhande) output only before space i.e Tejas or read only endof first space
	char str[20];
	printf("Enter String : \n");
//	scanf("%s",str);           // ------> it only print string before space
	scanf("%[^\n]",str);      // -------> for print all string this specifier is used.... i.e. Tejas Ekhande
	printf("%s\n",str);
 				*/

	// getchar() --------> ek ek char deto to so tyala store karava lagel
	
/*	char actr[20],ch ;
	int index = 0 ;
	while(	(ch = getchar()) != '\n')
	{
		actr[index] = ch ;
		index++ ;
	
	}

	actr[index] = '\0' ;       // -----> \0 manual ghyavi...
	printf("%s\n",actr);
									*/
	// gets() ----->  it is harmful function
	
/*	char player[20]	;
	printf("Enter Player Number : ");
	gets(player);
	printf("%s\n",player);
					*/
	// fgets() -----> three parameter fgets(arrname ,data number , File * (File name) or stdin);

	char player[10];
	printf("Enter Player Name :\n");
	fgets(player, 10 , stdin );              // 5-1 : paryant string vachto
	printf("%s\n",player);
}



/*
output : all output is based on input

 1) scanf -------> Tejas
		Tejas Ekhande
 2) getchar() -----> Tejas Ekhande 
 3) gets() -------> Rohit Sharma
 */

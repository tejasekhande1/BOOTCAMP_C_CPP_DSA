// WAP IN WHICH ACCORDING TO THE MONTH NUMBER PRINT THE NUMBER OF DAYS	

#include <stdio.h>
void main(){
	int a;
	printf("Enter No Of Month : \n");
	scanf("%d",&a);

	switch(a){
		case 1 :
			printf("No Of Days in January : 31\n");
			break;
		case 2 :
			int year;
			printf("Enter onGoing Year : \n");
			scanf("%d",&year);
		
			if(year % 4 == 0){
				printf("No Of Days in February(LEAP YEAR) : 29\n");
			}else if(year % 4 != 0){
				printf("No of Days in February(NON-LEAP YEAR) : 28\n");
			}else{
				printf("WRONG INPUT\n");
			}
		
			break;
		case 3 :
			printf("No Of Days in March : 31\n");
			break;
		case 4 :
			printf("No Of Days in April : 30\n");
			break;
		case 5 :
			printf("No Of Days in May : 31\n");
			break;
		case 6 :
			printf("No Of Days in June : 31\n");
			break;
		case 7 :
			printf("No Of Days in Jully : 30\n");
			break;
		case 8 :
			printf("No Of Days in August : 31\n");
			break;
		case 9 :
			printf("No Of Days in September : 30\n");
			break;
		case 10 :
			printf("No Of Days in Octomber : 31\n");
			break;
		case 11 :
			printf("No Of Days in November : 30\n");
			break;
		case 12 :
			printf("No Of Days in December : 31\n");
			break;
		default :
			printf("WRONG INPUT\n");
		
	}
}

#include <stdio.h>
void main(){
 
   int row,first_no = 0, second_no = 1, sum = 1;
   printf("Enter No Of Rows : ");
   scanf("%d",&row);
 
   for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= row; j++) {
         if (i == 1 && j == 1) {
            printf("0\t");
            continue;
         }
         printf("%d\t", sum);
         sum = first_no + second_no;
         first_no = second_no;
         second_no = sum;
      }
      printf("\n");
   }
}

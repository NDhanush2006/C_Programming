//Question2. Printing the sum of first 10 natural number using do-while and for loop.
#include<stdio.h>

int main(){
   int i, sum = 0;
   //1.Printing the sum of first 10 natural number using do-while
   /*do{
    sum = sum+i;
    i++;
   }while (i <= 10);
    printf("The Sum of first n Natural numbers is : %d", sum);*/

   //2.Printing the sum of first 10 natural number for loop.
   for ( i = 0; i <= 10; i++)
   {
    sum = sum+i;
   }
   printf("The Sum of first n Natural numbers is : %d", sum);
   
   
    return 0;
}
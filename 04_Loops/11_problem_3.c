//Question2. Printing the sum of first 10 natural number
#include<stdio.h>

int main(){
   int i = 1 , sum = 0;
   while (i <= 10)
   {
    sum = sum+i;
    i++;
   }
   printf("The Sum of first n Natural numbers is : %d", sum);
   
    return 0;
}

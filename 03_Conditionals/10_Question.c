/*Question1. Calclulate income tax paid by an employee to the government as per the slabs 
mentioned below 
Income slab    Tax
2.5-5.0L        5%
5.0-10.0L       20%
Above 10.0L     30%
*/

#include<stdio.h>

int main(){
    int income;
    float tax =0;
    printf("Enter Income :\n ");
    scanf("%d", &income);
    if (income <=250000)
    {
        tax =0;
    }
    else if (income>=250000 && income <=500000)
    {
        tax =0.05 * (income -250000);
    }
    else if (income>=500000 && income <=1000000)
    {
        tax =0.05 * (500000 -250000)+ 2.0 *(income - 500000);

    }

    else if (income > 1000000)
    {
        tax =0.05 * (500000 -250000)+ 2.0 *(1000000 - 500000) +0.3 *(income - 1000000);

    }
    printf("THe Total Tax you need to pay is : %0.2f", tax);
    
    

    return 0;
}

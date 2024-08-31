/*Question 4. Write a C program to check whether a given year is leap year or not*/

#include<stdio.h>

int main(){
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year%4 ==0 && year%100==0 || year%400==0)
    {
        printf("The Given Year is a Leap Year: %d",year);
    }
    else
    {
        printf("The Given Year is not a Leap Year: %d",year);
    }
    
    



    return 0;
}

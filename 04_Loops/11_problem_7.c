//Question6. Write a program to calculate the factorial of a given number using dowhile loop

#include<stdio.h>

int main(){
    int product=1;
    int n=5;
    int i =1;
    
    do{
        product*=i;
        i++;
    }while(i <= n);
    printf("The factorial is: %d", product);

    return 0;
}
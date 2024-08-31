//Question6. Write a program to calculate the factorial of a given number using forloop

#include<stdio.h>

int main(){
    int product=1;
    int n=5;
    for (int i = 1; i <=n; i++)
    {
        product*=i;
    }
    printf("The factorial is: %d", product);

    return 0;
}

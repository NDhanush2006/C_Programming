/*Recursion; - Call itself again and again until it becomes true*/

#include<stdio.h>

int factorial(int);

int factorial(int n){
    // factorial
    if (n == 1 || n ==0)
    {
        return 1;
    }
    return factorial(n-1) * n;

}


int main(){
    int a = 5;
    printf("The factorial of %d is %d",a, factorial(a));
    return 0;
}

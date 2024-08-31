//Write a recursion function to calculate first n natural numbers
#include<stdio.h>

int sum(int);

int sum(int n){
    // sum
    if (n == 1 || n ==0)
    {
        return 1;
    }
    return sum(n-1) + n;

}


int main(){
    int a = 5;
    printf("The sum of %d is %d",a, sum(a));
    return 0;
}
//Question1.Print the Multiplication table of given number n and print the table in reverse 
//order

#include<stdio.h>

int main(){
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    for (int i = 10; i; i--)
    {
        printf("%d x %d = %d\n", n, i, n*i );
    }
    

    return 0;
}
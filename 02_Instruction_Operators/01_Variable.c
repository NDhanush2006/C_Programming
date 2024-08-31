#include<stdio.h>

int main(){
    // Declare and Initialisaation value in vaariable
    int i = 10;
    int j = i;
    int a = 1, b = 2, c = 4, d = 10; //valid
    int x = a +b -c; //valid
    int m,n,o,p; //valid
    m = n = o = p = 20; //valid
    // %d is a Format specifier
    // %d is for a integer, %f is for a float, %c is for character
    printf("The value of i : %d and value of j is : %d\n",i, j);
    printf("The value of a : %d and value of b is : %d\n",a, b);
    printf("The value of c : %d and value of d is : %d\n",c, d);
    printf("%d\n", x);
    printf("%d", m);

    return 0;
}

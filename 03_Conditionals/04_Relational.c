/*Relational operator(>, <, >=, <=, !=)*/

#include<stdio.h>

int main(){
    int a= 2, b = 4;
    printf("A Greater than B : %d\n",a>b);
    printf("A Greater than or Equal to B : %d\n",a>=b);
    printf("A Less than B : %d\n", a<b);
    printf("A Less than B or Equal to B: %d\n", a<=b);
    printf("A NOT Equal to B: %d\n",a!=b);

    return 0;
}
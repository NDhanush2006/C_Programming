#include<stdio.h>

//Function Prototype
int sum(int, int);

//Function Definition
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 10;
    int b = 20;
    sum(a,b);
    // int c = sum(a,b); //Function call 
    // printf("%d\n", c);
    
    int a1 = 1;
    int b1 = 8;
    sum(a1,b1);

    return 0;
}

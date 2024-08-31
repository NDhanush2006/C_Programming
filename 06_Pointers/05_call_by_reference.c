#include<stdio.h>

int sum(int *, int *);
int sum(int *a ,int *b){
    *a = 6;
    return *a + *b;

}

int main(){
    int x = 3, y =2;
    printf("The sum of a and b is %d\n", sum(&x, &y));
    printf("The value of x is %d\n",x);
    return 0;
}
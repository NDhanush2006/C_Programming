#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i;

    float k = 2.5;
    float*k1 = &k;
    printf("The address of i is : %p\n", &i);
    printf("The address of j is : %p\n", j);
    printf("The value at address j is : %d\n", *j);


    return 0;
}

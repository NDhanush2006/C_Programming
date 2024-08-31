/*Pointer : it is a variable stores the address of another variable*/
#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; //j is a pointer pointing to i(address)
    printf("The address of i is : %p\n", &i);
    printf("The address of j is : %p\n", j);

    //printing the Declared value in variable from address
    printf("The value at address j is : %d\n", *j);

    return 0;
}

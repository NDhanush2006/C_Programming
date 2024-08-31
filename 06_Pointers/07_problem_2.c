//write a program having a variable 'i' print the address of 'i'. pass this variable to a function
//and print its address. Are these address same

#include<stdio.h>

int returning(int* ptr);
int returning(int* ptr){
    printf("The value of ptr is : %d\n",ptr);
    printf("The value at ptr is : %d\n", *ptr);
}

int main(){
    int i =2;
    int* ptr = &i;
    // printf("the address of i is :%u\n", &i);
    returning(ptr);
    return 0;
}
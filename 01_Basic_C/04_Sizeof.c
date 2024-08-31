// Sizeof - These is a built in function in c used to find how many bits it takes, it varies in different operatinng systerm

#include<stdio.h>

int main(){

    printf("The Size of Integer is : %zu\n",sizeof(int));

    printf("The Size of float is : %zu\n", sizeof(float));

    printf("The size character is : %zu\n", sizeof(char));
 
    return 0;
}
#include<stdio.h>

int main(){

    char c = 'a';
    c = 'c';
    // Esccape sequence(\n) - used to make new line character
    c = '\n';
    printf("Hello \nworld!");
    printf("\nHello \nDhanush Boss!\n");
    printf("Hello \tDhanush Boss!\n");
    printf("Hello \bDhanush Boss!\n");
    printf("Hello \\Dhanush Boss!\n");
    printf("Hello \'Dhanush Boss!\n");
    printf("Hello \" Dhanush Boss!\n");

    return 0;
}
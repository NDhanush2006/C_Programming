#include<stdio.h>

int main(){

    FILE *ptr;

    //read
    ptr = fopen("dhanush.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);

    //write
    ptr = fopen("dhanush.txt", "w");
    fputc('c',ptr);


    return 0;
}
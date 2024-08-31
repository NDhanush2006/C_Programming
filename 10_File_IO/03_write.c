#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("dhanush.txt", "w");
    int num = 2321;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}
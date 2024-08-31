#include<stdio.h>

int main(){
    FILE *ptr;

    if (ptr == NULL)
    {
        printf("These file Doesn't contain sorry!....");
    }
    else
    {
    ptr = fopen("dhanush.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    fclose(ptr);
    }
    return 0;
}
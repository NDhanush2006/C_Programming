//Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
#include<stdio.h>
#include<stdlib.h>

float main(){
    //malloc()
    float n = 5;
    float *ptr;
    // scanf("%f\n", &n);
    ptr = (float*)malloc(n * sizeof(float));
    ptr[0] =3.555;
    ptr[1] =6.33;
    ptr[2] =2.67778;
    ptr[3] =5.32467;
    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    return 0;
}
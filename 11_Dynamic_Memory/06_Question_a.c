/*1. Write a program to dynamically create an array of size 6 capable of storing 6
integers.
2. Use the array in problem 1 to store 6 integers entered by the user.
3.Solve problem 1 using calloc().
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    // int n = 6;
    // int* ptr;
    // ptr = (int*)malloc(n*sizeof(int));
    // ptr[0]= 4;
    // printf("%d", ptr[0]);

    int n = 6;
    int* ptr;
    // ptr = (int*)malloc(n*sizeof(int)); //malloc
    ptr = (int*)calloc(n, sizeof(int)); //calloc
    ptr[0]= 4;
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    


    return 0;
}
/*Write a program to create an array of 10 integers and store multiplication table of
5 in it.
*/
#include<stdio.h>

int main(){
    int arr[10];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n* (i+1);
        // printf("The value of 5 x %d = %d\n", i+1, arr[i]);

    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d x %d = %d\n",n, i+1, arr[i]);
    }
    


    return 0;
}
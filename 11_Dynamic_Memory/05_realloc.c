#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 5 ;
    int *ptr;
    ptr = (int*)calloc(n , sizeof(int));
    ptr[0] =3;
   
    printf("%d\n", ptr[0]);
    ptr = (int*)realloc(ptr ,10 * sizeof(int));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    //malloc()
    int n ;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*)calloc(n , sizeof(int));
    ptr[0] =3;
    printf("%d\n", ptr[0]);
    free(ptr);
    return 0;
}
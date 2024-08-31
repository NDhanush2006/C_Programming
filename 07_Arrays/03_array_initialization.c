#include<stdio.h>

int main(){
    int cgpa[3] = {7,8,9};
    int marks[] = {5,3};

    for (int i = 0; i < 3; i++)
    {
        printf("The value of marks at index %d is %d\n", i, cgpa[i]);
    }

    return 0;
}

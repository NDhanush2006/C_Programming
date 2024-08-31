//Question5. write a program to calculate the sum of the numbers occuring the multilication table of 8 using while loop

#include<stdio.h>

int main(){
    int sum =0;
    for (int i = 0; i <= 10; i++)
    {
        sum+=(8*i);
    }
    printf("the sum of the numbers occuring the multiplication table of 8 is : %d", sum);

    return 0;
}

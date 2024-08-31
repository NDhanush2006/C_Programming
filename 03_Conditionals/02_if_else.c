/*
If-Else :- if the given condition is satisfies then only it will execute if block, if doesn't satisfies execute it directly jump to execute else
*/
#include<stdio.h>

int main(){
    int age = 5;

    if (age > 18)
    {
        printf("You Can Vote! Your age is Above...");
    }

    else{
        printf("You Cannot Vote!...Your age is: %d", age);
    }

    return 0;
}



#include<stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You Can Drive and You are Senior Citizen!....");
    }
    else if (age > 18)
    {
        printf("You Can Drive and Young....");
    }

    else{
        printf("You Cannot Drive");
    }

    return 0;
}

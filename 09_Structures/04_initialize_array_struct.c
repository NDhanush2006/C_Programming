#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    struct employee harry = {20, 550,"Dhanush"};
    printf("%d %f %s", harry.code, harry.salary, harry.name);

    return 0;
}
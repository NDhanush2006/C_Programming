#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

int main(){
    // typedef int harry;
    // harry a = 88;
    // printf("The value of a is %d", a);
    emp e1;
    emp*ptr1 = &e1;
    strcpy(e1.name, "Harry");
    e1.code = 12345;
    e1.salary = 5500;

    printf("%d %f %s",e1.code,e1.salary,e1.name);
    printf("%d %f %s",ptr1->code,ptr1->salary,ptr1->name);

    return 0;
}
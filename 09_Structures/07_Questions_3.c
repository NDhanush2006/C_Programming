/*3. Write a program to illustrate the use of arrow operator → in C.*/
#include<stdio.h>

typedef struct employee{
    int salary;
    float score;
}Employee;

int main(){
    Employee e1;
    Employee *ptr = &e1;
    ptr->salary = 55;
    ptr->score = 49.6;
    printf("The value of salary is %d and the value of score is %f\n",ptr->salary,ptr->score);
    return 0;
}
/*Question1. Write a program to determine whether a student has passed or failed to pass, a student reduire a total 40% and atleast 33% in each subject.Assume there are three subjects and take marks as input from user*/
#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    int total_marks;
    printf("Enter Mark1 :\n ");
    scanf("%d", &marks1);
    printf("Enter Mark2 :\n ");
    scanf("%d", &marks2);
    printf("Enter Mark3 :\n ");
    scanf("%d", &marks3);
    printf("Marks are %d,%d and %d\n",marks1,marks2,marks3);
    
    if (marks1 <33 ||marks2<33 ||marks3<33)
    {
        printf("You are failed Due failed in one subject...\n");
    }
    else if ((marks1 +marks2 +marks3)/3 < 40)
    {
        printf("You are failed Due to less Percentage %\n");
    }
    else{
        printf("You are Passed!..");
    }
    
    

    return 0;
}

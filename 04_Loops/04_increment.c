#include<stdio.h>

int main(){
    int i = 5; //5
    printf("THe Value of i is : %d\n",i);
    i = i+5; //10
    printf("THe Value of i is : %d\n",i);
   
    printf("THe Value of i is : %d\n",i++);
    // i++ prints i first and then increments(Post increment operator)
    // ++i increments first and then prints i(Pre increment operator)
    return 0;
}

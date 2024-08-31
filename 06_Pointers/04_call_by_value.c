//Call by value

#include<stdio.h>

int sum(int, int);
int sum(int a ,int b){
    return a+b;

}

int main(){
    printf("The sum of a and b is %d", sum(4,5));
    
    return 0;
}

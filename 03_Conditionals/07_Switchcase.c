#include<stdio.h>

int main(){
    char a ;
    int num1, num2;
    printf("Enter Value : ");
    scanf("%c", &a);
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    switch (a){
        case '+':
            printf("Addition: \b");
            printf("%d\n", num1+num2);
            break;
        case '-':
            printf("Subtraction: \n");
            printf("%d\n", num1-num2);
            break;
        case '*':
            printf("Multiplication: \n");
            printf("%d\n", num1*num2);
            break;
        case '/':
            printf("Division: \n");
            printf("%d\n", num1/num2);
            break;
        case '%':
            printf("Modulus: \n");
            printf("%d\n", num1%num2);
            break;
        default:
            printf("Invalid Operator or value");
            break;
    }


    return 0;
}

/*Logica operators(&&(AND), ||(OR), !(NOT))
&&(AND) - If Both the statement is Correct it will Print 1 else it will print 0
||(OR)  - If anyone the statement is Correct it will Print 1 else it will print 0
!(NOT)  - If the statement is true(1) it prints false(0), or if it is false(0) it will print true(1).
*/

#include<stdio.h>

int main(){
    int a= 2, b = 1;
    printf("Tha value of a and b is : %d\n",a&&b);
    printf("Tha value of a or b is : %d\n", a||b);
    printf("Tha value of a not b is : %d\n",!a);

    return 0;
}

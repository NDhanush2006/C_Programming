/*TYPE CONVERSION :-

An Arithmetic operation between
• int and int → int
• int and float → float
• float and float → float

Example:
o 5/2 becomes 2 as both the operands are int
o 5.0/2 becomes 2.5 as one of the operands is float
o 2/5 becomes 0 as both the operands are int
NOTE:
In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is
demoted to 3, losing the fractional part because a is an integer. Conversely, for float
a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining
precision.
14
int a = 3.5; // In this case 3.5 (float) will be demoted to 3 (int)
because a is not able to store floats.
float a = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)*/

#include<stdio.h>

int main(){
    int a = 5;
    int b = 2;
    // float c = a/b; --> 4
    float c = a/b; 
    printf("The Percentage of a/b is: %f", c);

    return 0;
}

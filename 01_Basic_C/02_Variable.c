/* Variable : - Variable is a container which stores a 'value' .variables in a c stores value of a constant  

Rules for variable naming in c :-
1.First character must be an alphabet or underscore(_)
2.No commas and No blanks allowed
3.No special symbol other than (_)underscore allowed.
4.Variable names are case sensitive

int a;
a = 10
(or)
int a= 10;    , int a = a+b ; //valid, int a+b = z//invalid
*/

#include<stdio.h>

int main(){
    int a; //Variable declaration
    a = 10;//Variable Initialization
    printf("%d", a);
 
    return 0;
}
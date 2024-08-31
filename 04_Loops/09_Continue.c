/*Continue:- Exit(or)Skip the iteration
    The continue statement is used to immediately move next iteration of the loop
*/

#include<stdio.h>

int main(){
    for (int i = 0; i < 8; i++)
    {
        if(i==3){
            continue;
        }
        printf("The value is : %d\n",i);
    }
    printf("Loop Has Done and Exit!...");


    return 0;
}
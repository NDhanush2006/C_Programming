/*Break :- The break is used to exit the loop whether the condition is true ot false*/

#include<stdio.h>

int main(){
    for (int i = 0; i < 5; i++)
    {
        if(i==3){
            break; //exit the loop now
        }
        printf("The value is : %d\n",i);
    }
    


    return 0;
}

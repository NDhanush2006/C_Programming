/* Write a program with the three functions
    1.Good morning function which prints"good morning"
    2.Good evening function which prints"good evening"
    3.Good nightfunction which prints"good night"
    Note:- Void- which has nothing(Null)
*/
#include<stdio.h>

void good_morning();
void good_evening();
void good_night();

void good_morning(){
    printf("Good Morning\n");
}
void good_evening(){
    printf("Good Evening\n");
}
void good_night(){
    printf("Good Night\n");
}


int main(){
    good_evening();
    good_morning();
    good_night();

    return 0;
}

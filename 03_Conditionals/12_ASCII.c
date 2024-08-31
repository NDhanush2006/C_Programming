/*Question5. Using ASCII value Check the given character is Lowercase or Uppercase
    ASCII Value:-
    small letters : a to z - 97 to 122
    capital letters : A to Z -65 to 90
*/
#include<stdio.h>

int main(){
    int ch = 'a';
    printf("The Character is : %c\n", ch);
    printf("The value of Character is : %d\n", ch);
    if (ch >= 97 && ch<= 122)
    {
        printf("It is a Lowercase:");
    }
    else
    {
        printf("It is a Uppercase");
    }
    


    return 0;
}

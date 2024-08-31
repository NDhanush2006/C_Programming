/*7.Write a program to check whether a given character is present in a string or not.*/
#include<stdio.h>
#include<string.h>


int main(){
    char c= 'r';
    int contains =0;
    char str[] = "Harry";
    for (int i = 0; i < strlen(str); i++)
    {
       if (str[i] == c)
       {
        contains++;
        break;
       }
    }
    if (contains)
    {
        printf("Yes it contains\n");
    }
    else{
        printf("it Doesn't contains\n");
    }
    
    // printf("%d\n", contains);


    return 0;
}
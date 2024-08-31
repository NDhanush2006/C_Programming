#include<stdio.h>

int main(){
    char s[] = {'D','h','a','n','u','s','h','\0'};
    for (int i = 0; i < 8; i++)
    {
        printf("%c\n",s[i]);
    }
    

    char st[4] ;
    printf("Enter string : ");
    scanf("%s", st);
    printf("%s", st);


    return 0;
}
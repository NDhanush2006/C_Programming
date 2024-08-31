#include <stdio.h>
#include <string.h>

int main()
{
    // strlen() - used to print the length of the string
    char st[] = "Harry";
    printf("%d\n", strlen(st));

    // STRCPY()-This function is used to copy the content of second string into first string passed to it.
    char source[] = "Harry";
    char target[30];
    strcpy(target, source);
    printf("%s %s\n", st, target);

    // STRCAT() -This function is used to concatenate two strings.
    char s1[12] = "hello";
    char s2[] = "harry";
    strcat(s1, s2);
    printf("%s\n", s1);

    /*STRCMP()
    This function is used to compare two strings. It returns 0 if the strings are equal, a
    negative value if the first string's mismatching character's ASCII value is less than the
    second string's corresponding mismatching character, and a positive value otherwise.
    strcmp("far", "joke"); // Negative value
    strcmp("joke", "far"); // Positive value*/
    int a  = strcmp("far", "ajoke");
    printf("%d", a);

    return 0;
}
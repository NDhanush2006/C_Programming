/*5.Write a program to encrypt and decrypt a string by adding 1 to the ascii value of its
characters.*/
#include<stdio.h>
#include<string.h>


int main(){
    // encrypt
    char str[] = "Dhanush";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] + 1;
    }
    printf("%s\n", str);

    //decrypt
     char decrypt[] = "Eibovti";
    for (int i = 0; i < strlen(decrypt); i++)
    {
       decrypt[i] = decrypt[i] - 1;
    }
    printf("%s\n", decrypt);
    


    return 0;
}
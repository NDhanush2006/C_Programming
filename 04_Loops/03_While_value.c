//Printin numbers from 1 to 10 using while loop

// #include<stdio.h>

// int main(){
//     int i =0;
//     while (i <= 10)
//     {
//         printf("The Value of i is : %d\n",i);
//         i++;
//     }

//     return 0;
// }
/*Write a C Program to print natural numbers from 10 to 20 when initial loop counter is is 
 initialized to 0*/
 #include<stdio.h>

int main(){
    int i =0;
    while (i <= 20)
    {
        if (i>=10)
        {
            printf("The Value of i is : %d\n",i);
        }
        i++;   
    }

    return 0;
}
/* Pattern printing
print the following pattern using function
*
**
***
****

*/

#include<stdio.h>

int main(){
    int n = 3, no_of_stars;
    for (int i = 0; i < n; i++)
    {
        //this loops runs from 0 to 2
        //if i = 0 ---> print 1 star
        //if i = 1 ---> print 3 star
        //if i = 2 ---> print 4 star
        for (int j = 0; j <2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

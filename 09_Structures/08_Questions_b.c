/*7.Write a structure capable of storing date. Write a function to compare those
dates.
*/
#include<stdio.h>

struct Date{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct Date d1, struct Date d2){
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    
}

int main(){
    struct Date d1 ={ 12, 4, 2000};
    struct Date d2 ={ 11, 7, 2006};

    return 0;
}
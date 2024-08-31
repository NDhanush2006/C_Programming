/*Q3. Write a program containing a function which reverses the array passed to it.*/

#include<stdio.h>
 
void printfarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
} 
void reverse(int arr[],int n){
    // arr[i]
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6};
    printf("Before Swapping\n");
    printfarray(arr, 6);
    reverse(arr, 6);
    printf("After Swapping\n");
    printfarray(arr, 6);


    return 0;
}
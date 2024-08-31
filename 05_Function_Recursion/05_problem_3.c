//Write a program using function to calculate force f attraction of a body of mass 'm' exerted
//by earth. consider g = 9.8 m/s^2

#include<stdio.h>

float force(float mass);
float force(float mass){
    return 9.8*mass;
}

int main(){
    int m = 45;
    printf("The Value of force is %f\n", force(m));

    return 0;
}

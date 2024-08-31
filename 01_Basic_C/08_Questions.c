/* Question1 . Write a  C program to calculate area of a rectangle:
    a. using Hard coded inputs
    b. Using user input
    area of rectangle : Area = lenght X Width    
*/

// #include<stdio.h>

// int main(){
//    float area , length, width;
//    printf("Enter length of rectangle : ");
//    scanf("%f", &length);
//    printf("Enter Width of rectangle : ");
//    scanf("%f", &width);
//    area = length * width;
//    printf("The Area of rectangle is : %f\n", area);
// //    (or)
// //    printf("The Area of rectangle is : %f", length*width);

//     return 0;
// }

/*Question2. calculate  the area of a circle and also modify the same program to calculate the volume of cylinder by given its  radius and height
    r = radius, h = height
    area of a circle = 3.14*r*r
    volume of cylinder =  3.14*r*r*h
*/
// #include<stdio.h>

// int main(){
//     int r, h;
//     float circle;
//     printf("Enter radius : ");
//     scanf("%d", &r);
//     circle = 3.14 *r*r;
//     printf("Area of the circle with radius: %d is : %f",r, circle);
//     printf("\nEnter Height : ");
//     scanf("%d", &h);
//     circle = 3.14 *r*r*h;
//     printf("Volume of the cylinder with radius: %d and height : %d is %f",r,h,circle);

//     return 0;
// }
/*Question3. Write a C program to convert celsius into fahrenheit

*/
// #include<stdio.h>

// int main(){
//     float c,f;
//     printf("Enter celsius : ");
//     scanf("%f", &c);
//     f = (9.0/5)*c + 32;
//     printf("The value of fahrenhrit is : %f", f);


//     return 0;
// }


// Question 4. Write a program to calculate simple interest principle

#include<stdio.h>

int main(){
    float simple, principle, interest, time;
    printf("Enter the principle : ");
    scanf("%f", &principle);
    printf("Enter the interest : ");
    scanf("%f", &interest);
    printf("Enter the time : ");
    scanf("%f", &time);
    simple = (principle*interest*time)/100;
    printf("The simple interest is : %f", simple);
    return 0;
}

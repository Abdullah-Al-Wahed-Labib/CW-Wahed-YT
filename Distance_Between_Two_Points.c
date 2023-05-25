// Today we are going to create a program in C programming language to calculate the distance between two points in a planar 2D graph
// We will use a very simple formula to calculate the distance
// The formula is d = √((x2 – x1)² + (y2 – y1)²)

// let's include necessary header files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// the main function
void main(){

    // declare variables
    long double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    long double d = 0;

    // let's print a welcoming message in the console
    printf("\nWelcome to the point distance calculator !\n");

    // let's prompt the user to enter the values
    printf("Enter the x1 coordinate: ");
    scanf("%Lf", &x1);

    printf("\nEnter the x2 coordinate: ");
    scanf("%Lf", &x2);

    printf("\nEnter the y1 coordinate: ");
    scanf("%Lf", &y1);

    printf("\nEnter the y2 coordinate: ");
    scanf("%Lf", &y2);

    // let's calculate the distance between two points
    d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    // let's print the result to the console
    printf("\nThe distance between the two given point is %Lf", d);
}
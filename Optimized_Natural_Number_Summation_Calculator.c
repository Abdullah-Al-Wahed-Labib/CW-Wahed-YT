// Today we are going to optimize our program that we have wrote in the previous video
// in that video we have implemented a first n natural number summation calculator in the C programming language
// we used a for loop for that purpose, though our solution was working there is a better and efficient way to do this
// In this video, we are going to write a program in C to get the same job done but we'll do it using a formula
// The summation of first n natural number is ((n * (n + 1)) / 2), we are going to implement this formula in our code.

//  Ok, So let's start by including our header files

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// the main function to calculate summation
void main(){

    //let's print welcoming message to the console
    printf("\nWelcome to the calculator to get the sum of first n natural numbers !\n\n");

    // let's declare necessary variables now
    unsigned long int summation = 0;
    int range = 0;

    //let's ask the user to enter the range to calculate the summation
    printf("Please enter the range to calculate summation : ");

    //Now we are going to take the entered value and save the value accordingly
    scanf("%d", &range);

    //let's implement the formula described above
    summation = ((range * (range + 1)) / 2);

    // we have now successfully calculated the summation of the first n natural number using the formula
    // let's print the result to the console
    printf("The summation from 1 to %d is %ld", range, summation);
}
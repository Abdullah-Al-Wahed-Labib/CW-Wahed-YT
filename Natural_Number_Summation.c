// Today we are going to write a C program which will calculate the summation of the first n-th number of natural numbers
// The program will receive the number or the range from the user and then go trough from 1 to the given number using a for loop
// We then sum all the numbers into one variable to show the result

// Let's include the header files first

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// the main function
void main()
{
    // declare the variables
    // we are declaring an unsigned long int to store big numbers
    // as the summation won't be negative, we may use unsigned variable to store more data

    unsigned long int summation = 0;
    int range = 0;

    // Let's ask the user to enter the number
    printf("\nPlease enter the number of integers to get the summation : ");

    // lets get that number and store it to the variable
    scanf("%d", &range);

    // let's calculate the summation using a for loop
    for (int i = 1; i <= range; i++)
    {
        
        // let's add each number to get the correct summation
        summation += i;

    }

    // now we should print out the results
    printf("The summation from 1 to %d is %ld", range, summation);
}
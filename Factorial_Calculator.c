// Today we are going to implement an algorithm to calculate the factorial of a number
// we will use for loop to do this. It needs no telling that, this is a very basic and inefficient algorithm
// but to keep everything simple we would do this using a very basic for loop. We will iterate through all the number from 1 to n and
// multiply them with the result to get the actual factorial

// let's include the header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// the main function
void main(){

    // let's print a welcoming message to the console
    printf("Welcome to the program to calculate the factorial of a number \n");
    
    // declare necessary variables
    unsigned long int factorial = 1;
    int n = 0;

    //let's ask the user to enter the value of n
    printf("Please enter the number to calculate the factorial : ");

    //let's get the value that the user has given to the console
    scanf("%d", &n);

    // let's calculate the factorial
    for (int i = 1; i <= n;i++){
        factorial *= i;    // factorial = factorial * i
    }

    // we are going to print the factorial
    printf("The factorial of %d is %ld", n, factorial);
}
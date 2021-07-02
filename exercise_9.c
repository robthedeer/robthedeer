//
//  exercise_9.c
//  QSN:  Write a C program that accepts two integers from the user and calculate the sum of the two integers.
//
//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>


int main(void){
    
    //Declare variables
    
    int integer1;
    int integer2;
    
    
    
    // Prompt the user a number
    printf("Please enter the first number:\n");
    scanf("%d", &integer1);
    printf("Please enter the second number:\n");
    scanf("%d", &integer2);
    
    //Now let's calculate
    int sum = integer1 + integer2;
    printf("This program will add the numbers for you!!!\n");
    printf("The addition of the two numbers entered is: %d\n", sum);
    
    printf("Thank you");
    
    
}

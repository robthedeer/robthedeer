//
//  exercise_10.c
//  Write a C program that accepts two integers from the user and calculate the product of the two integers
//
//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>

int main(void){
    
    //Declare variables
    int x;
    int y;
    int product;
    
    printf("Enter the first integer:\n");
    scanf("%d",&x);
    
    printf("Enter the second integer\n");
    scanf("%d",&y);
    product = x*y;
    printf("The product of these two numbers is: %d\n", product);
    
    printf("Thanks for using my program\n");
    
}

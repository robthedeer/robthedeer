//
//  exercise_11.c
//  
//Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items
//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>

int main(void)
{
    float weight_item1;
    float weight_item2;
    int num_item1;
    int num_item2;
    float average_value;
    
    printf("Enter the weight of item 1: \n");
    
    scanf("%f", &weight_item1);
    printf("Enter the weight of item 2:\n");
    scanf("%f", &weight_item2);
    
    printf("Enter the number of purchase for item 1: \n");
    scanf("%d",&num_item1);
    
    printf("Enter the number of purchase for item 2: \n");
    scanf("%d", &num_item2);
    
    //Calculate the average value of the item
    // A = (A+B)/4
    average_value = ((weight_item1 * num_item1) + (weight_item2 * num_item2)) /(num_item1 + num_item2);
    
    printf("The Average value of purchase is: %f \n", average_value);
    
    
    
    
    
}

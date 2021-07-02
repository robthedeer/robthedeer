//
//  exercise_15.c
//  Write a C program to calculate the distance between the two points
//
//  Created by  Rob the deer on 16.04.2021.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declare variables
    
    float x1,y1,x2,y2;
    double dist;
    
    printf("Enter the coordinates at point A: \n");
    
    printf("x: ");
    scanf("%f", &x1);
    
    printf("y: ");
    scanf("%f", &y1);
    
    printf("Enter the coordinates at point B: \n");
    
    printf("x:");
    scanf("%f", &x2);
    
    printf("y:");
    scanf("%f", &y2);
    
    
    // Calculate the distance
    //So we use the distance formula
    dist = ((x1-x2)*(x1-x2) ) + ((y1-y2)*(y1-y2));
    
    printf("The distance between point A (%.2f,%.2f)  and point B(%.2f,%.2f) is: %.2f\n", x1, y1, x2, y2, sqrt(dist));
    
    printf("Thanks for using my program\n");
    
}

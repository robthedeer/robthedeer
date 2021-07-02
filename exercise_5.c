//
//  exercise_5.c
//  Qss:  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches
//
//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>

int main(void)
{
    //Declaration of Variables
    int perimeter;
    int height;
    int width;
    float Area;
    
    //Assign variables
    height= 7;
    width = 5;
    Area = height * width;
    perimeter = (2*height) + (2*width);
    
    
    //Write a computing function of Area and Perimeter
    

    printf("The Perimeter of a rectangle with a hieght of %d inches and a width of %d inches is: %d inches\n", height,width,perimeter);
    //Area function
    printf("The Area of this rectangle is:%f inches\n", Area);
    
    puts(":_:\n");
    puts("Thank you for your time\n");
    
    
    
}

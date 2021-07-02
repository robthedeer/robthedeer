//
//  exercise_14.c
//  
//

//
//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
//  Created by  Rob the deer on 16.04.2021.
//

#include <stdio.h>


int main(void)
{
    //Declare variables
    int total_dist;
    float avg_cons;
    float fuel_used;
    
    
    printf("\t\t\t FUEL CONSUMPTION CALCULATOR\t\t\t\t\n");
    printf("Enter the total distance travelled in kilometres (KM): \n");
    scanf("%d", &total_dist);
    
    printf("Enter the total fuel consumed in litres (L): \n");
    scanf("%f",&fuel_used);
    
    //Average consumption
    avg_cons = (total_dist/fuel_used);
    
    printf("The average motorbike fuel consuption is: %.2f \n", avg_cons);
    
    //
    

    
}

//
//  exercise_8.c
//  
//Write a C program to convert specified days into years, weeks and days

//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>

int main(void)
{
    //Declare variables
    int days;
    double years;
    float weeks;
    int hours;
    double months;
    
    
    
    //Ask user input to enter the days that need to be converted
    printf("Please enter the number of days:   \n");
    scanf("%d",&days);
    
    //Formulas for conversion
    // In 1 year there are 365 days which means 1 day is eqaul to 1/365
    // In 1 year there are 12 months meaning 4*12 = 48 weeks = 48*7=
    // 1 week = 7days, 1 day =1/7 = 0,14 weeks
    // 1 month = 30 days , 1 day = 1/30 =0,03 months
    //1 day =24hours
    
    
    //Declare formula
    years = (days/365);
    months =(days/30);
    hours = (days*24);
    weeks =(days/7);
    
    //computing
    printf("You have entered: %d days:\n They have been converted into : %d hours\n %f weeks\n %lf months and %lf years\n", days, hours, weeks,months, years);
    
    //
    printf("Thank you!");
    
}

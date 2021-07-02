//
//  exercise_12.c
//  QSN:
//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
//
//  Created by  Rob the deer on 15.04.2021.
//

#include <stdio.h>


int main(void){
    
    char* ID [10];
    int total_hours_worked;
    double amount_received_hour;
    double month_salary;
    
    
    printf("Enter your Employee ID:\n ");
    scanf("%s", &ID );
    
    printf("Enter total number of hours worked: \n");
    scanf("%d", &total_hours_worked);
    
    printf("Enter the amount recieved per hour: \n");
    scanf("%lf", &amount_received_hour);
    
    // Let's print the information
    
    month_salary = amount_received_hour * total_hours_worked;
    
    
    printf("Your information has been completely processed!! ||_:__:||\n");
    printf("ID NUMBER: %s\n", ID);
    printf("TOTAL NO. OF HOURS WORKED:  %d \n", total_hours_worked);
    printf("TOTAL AMOUNT RECIEVED PER HOUR: %.2lf \n", amount_received_hour);
    printf("TOTAL MONTH SALARY: %.2lf \n", month_salary);
    
    
}

//
//  exercise_17.c
//
/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.*/
//
//  Created by  Rob the deer on 22.04.2021.
//

#include <stdio.h>

int main(void)
{
    int days;
    int secs;
    int min;
    int hrs;
    
    printf("\t\t\t\t\t\t Welcome to your TIME CONVERSION CALCULATOR\t\t\t\n");
    printf("Enter the number of days that you want to convert: \n");
    scanf("%d", &days);
    
    // Compute the formulae;
    // 1 day = 24 hours
    //1day =1440 minutes
    // 1 hour = 60 minutes
    //1 minute = 30 seconds
    
    hrs = days*24;
    min = days*1440;
    secs = days *86400;
    
    printf("%d days has been converted to the following: \n", days);
    printf("%d hours\n",hrs);
    printf("%d minutes\n",min);
    printf("%d seconds\n", secs);
    
    printf("Therefore: %d days are %d hrs: %d min :%d sec\n", days, hrs,min,secs);
    printf("\t\t\t\t\tTHANK YOU\t\t\t\t\t\n");
    
    
    
}

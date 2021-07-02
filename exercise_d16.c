//
//  exercise_1.h
//  
//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
//Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
//  Created by  Rob the deer on 13.04.2021.
//



#include <stdio.h>

int main(void)
{
    int total;
    int x;
    int y;
    
    
    //Prompt the total figure
    
    printf("Enter the total amount: \n");
    scanf("%d", &total);
    
    //Break it into hundreds
    x = total/100;
    y = total%100;
    
    if (total % 100 == 0){
        printf("%d Notes of 100 bills \n", x);
    }
    else{
        printf("%d Notes of 100 bills \n", x);
    }
    
    
    
    // Break into fifties
    x = y/50;
    y= total%50;
    
    if (y <= 0){
        printf("%d Notes of 50 bills \n", x=0);
    }
    else{
        printf("%d Notes of 50 bills \n", x);
    }
    
    
    //Break it into twenties
    x = y/20;
    
    
    if (y <= 0){
        printf("%d Notes of 20 bills \n", x=0);
    }
    else{
        printf("%d Notes of 20 bills \n", x);
    }
    
    
    // Break it into tens
    x = y/10;
    y = total%10;
    
    if (y <= 0){
        printf("%d Notes of 10 bills \n", x=0);
    }
    else{
        printf("%d Notes of 10 bills \n", x);
    }
    
    
    // Break it into fives
    x = y/5;
    
    
    if (y <=0){
        printf("%d Notes of 5 bills \n", x=0);
    }
    else{
        printf("%d Notes of 5 bills \n", x );
    }
    
    
    // Break it into ones
    x =y/1;
    y = total%1;
    
    if (y<= 0){
        printf("%d Notes of 1 bills \n", x=0);
    }
    else{
        printf("%d Notes of 1 bills \n", x);
    }
    
    
    
    
}

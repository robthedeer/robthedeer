//
//  exercise_16.c
//
// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes
//
//  Created by  Rob the deer on 16.04.2021.
//

#include <stdio.h>

int main(void)

{
    int amount;
    int total;
    
    
    printf("Enter the amount in USD : \n");
    scanf("%d", &amount);
    printf("You have inserted %d USD\n", amount);
    
    //Formula for 100 bills
    total = amount/100;
    printf("%d notes of 100 dollar bills\n",total);
    
    amount = amount -(total*100) ;
    
    total = amount/50;
    printf("%d Notes of 50 dollar bills\n", total);
    
    amount = amount -(total*50);
    
    total = amount/20;
    printf("%d Notes of 20 dollar bills\n", total);
    
    amount = amount -(total*20);
    
    total = amount -(total*10);
    printf("%d Notes of 10 dollar bills\n", total);
    
    amount = amount - (total*10);
    
    total = amount /5;
    
    printf("%d Notes of 5 dollar bills\n", total);
    
    amount = amount - (total*5);
    
    total = amount /1;
    
    printf("%d Notes of 1 dollar bills\n", total);
    
    
    
    
    
    

}

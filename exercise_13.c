//
//  exercise_13.c
//  
//Write a C program that accepts three integers and find the maximum of three.
//  Created by  Rob the deer on 16.04.2021.
//

#include <stdio.h>

int main(void){
    
    
    int i;
    int j;
    int k;
    
    printf("Enter three integers: (press any key after)\n");
    scanf("%d\n%d\n%d\n", &i, &j, &k);
    if (i >j && k <i)
           {
               printf("PROCESSING\n");
               printf("%d is the maximum number\n", i);
               
        
           }
    else if (j>i && k < j)
           {
        printf("%d is the maximum number\n", j);
    }
    else{
           
        printf("%d is the maximum number\n", k);
    }
    
    
    
    
           
           
    
}

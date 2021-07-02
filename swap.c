//
//  swap.c
//  
//
//  Created by  Rob the deer on 27.05.2021.
//

#include <stdio.h>


int main()
{
    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    
    int i, aux;
    
    for(i=0; i<10 ; i++)
    {
        if(numbers[i]>numbers[i+1])
        {
            numbers[i]=aux;
            numbers[i]=numbers[i+1];
            numbers[i+1]=aux;
        }
        printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f", numbers[i],numbers[i+1],numbers[i+3],numbers[i+4],numbers[i+5],number[i+6],numbers[i+7],numbers[i+8],numbers[i+8],numbers[i+9]);
    }

    
    return 0;
}

//
//  array_.c
//  
//
//  Created by  Rob the deer on 22.05.2021.
//

#include <stdio.h>


int main()
{
    int number[10],auxiliary,i;
    
    number[i]=0;
    number[1] = number[0];
    number[2]= number[1]+number[0];
    number[3]= number[2] +number[1];
    
    auxiliary =number[i-1]+ number[i-2];
    
    for( number[i] =0; number[i]< 9; number[i]++)
    {
        for(i=0; i<9; i+=2){
            
            printf("%d",auxiliary);
        }
        
        
        
        
    }
    return 0;
}

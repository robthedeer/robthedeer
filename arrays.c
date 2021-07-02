//
//  arrays.c
//  
//
//  Created by  Rob the deer on 25.05.2021.
//

#include <stdio.h>


int main()
{
    
    
    int i, fibonacci[10];
    
    fibonacci [0]=1;
    fibonacci [1]=1;
    
    for(i =2; i< 10; i++)
    {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }
    
    for(i=0; i<10; i++)
    {
        printf("%d\n",fibonacci[i]);
    }
    
    return 0;
}

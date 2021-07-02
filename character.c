//
//  character.c
//  
//
//  Created by  Rob the deer on 26.05.2021.
//

#include <stdio.h>

int main()
{
     
    char fiveletters [] = {'a','b','c','d','e','\0'};
    int i=0;
    for(i=6 ; i >=0 ; i--)
    {
        fiveletters[0] = 'a';
        
        printf("%c\n",fiveletters[i]);
    }
    
    return 0;
    
}

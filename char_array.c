//
//  char_array.c
//  
//
//  Created by  Rob the deer on 25.05.2021.
//

#include <stdio.h>


int main()
{
    int i,j,k; char alphabet [26][6][5]= {{"abcdefghhijklmnoprstuvwxyz"},{"robert"}, {"tanya"}};
    
    for(i=0 ; i < 5 ; i++)
    {
        alphabet[i]='a';
        printf("%c\n",alphabet[i]);
    }
    for(j=5; j<16 ; j++)
    {
        alphabet[j]='e';
        printf("%c\n",alphabet[j]);
        
    }
    for(k=16; k<26; k++)
    {
        alphabet[k] ='f';
        printf("%c\n", alphabet[k]);
    }
    
    return 0;
    
}

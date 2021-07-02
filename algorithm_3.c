//
//  algorithm_3.c
//  
//
//  Created by  Rob the deer on 23.04.2021.
//

#include <stdio.h>


    /* Test and try to use the functions*/
    
    /*Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/
int max(int a, int b, int c,int d){
    printf("Hello, World\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int max = max_of_four(a,b,c,d);
   
    return max;


}

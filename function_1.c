//
//  function_1.c
//  
//
//  Created by  Rob the deer on 24.04.2021.
//

#include <stdio.h>
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}

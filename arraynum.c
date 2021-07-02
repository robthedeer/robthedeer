//
//  arraynum.c
//  
//
//  Created by  Rob the deer on 26.05.2021.
//

#include <stdio.h>
int main( void ) {
       
           int numbers[ 10 ];
           int i, index = 2;
           
           for( i = 0; i < 10; i++ )
               numbers[ i ] = i * 10;
           
           numbers[ 8 ] = 25;
           numbers[ 5 ] = numbers[ 9 ] / 3;
           numbers[ 4 ] += numbers[ 2 ] / numbers[ 1 ];
           numbers[ index ] = 5;
           ++numbers[ index ];
           numbers[ numbers[ index++ ] ] = 100;
           numbers[ index ] = numbers[ numbers[ index + 1 ] / 7 ]--;
           
    for( index = 0; index < 10; index++ ){
        printf( "numbers[ %d ] = %d\n", index, numbers[ index ] );
    }
           
           
       } /* End of second sample program */

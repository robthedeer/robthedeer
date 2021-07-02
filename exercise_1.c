//
//  exercise_1.c
//  Question:
//Write a C program to print your name, date of birth. and mobile number.//
//
//  Created by  Rob the deer on 13.04.2021.
//

#include <stdio.h>

int main(void){

//declaration of variables

int dd;
int mm;
int yyyy;
long int mobile_num;


printf("/////________WELCOME TO MY DATABASE____\\\\\n");
//assign variables
  
dd = 25;
mm = 06;
    yyyy = 1997;
    mobile_num = 89104483756;

printf("Hey, Everybody, My name is: ROBERT NYAMUGADA\n, and\n my birthdate is %d.%d.%d\n My mobile number is: %ld\n",dd,mm, yyyy, mobile_num);

    puts("///////THANKS VERY MUCH\\\\\\\\\\\\");

}


//
//  exercise_a16.c
//  
//
//  Created by  Rob the deer on 17.04.2021.
//

#include <stdio.h>

int main(void){
    
    
    int t_amt;
    int product;
    
    printf("Enter the amount you want to break down: \n");
    scanf("%d", &t_amt);
    
    
    int x1=100,x2=50,x3=20,x4=10,x5=5, x6=2, x7=1;
    int y1,y2,y3,y4,y5,y6,y7;
    int r1,r2,r3,r4,r5,r6;
    
    //Calculate for values of 100
    y1 =t_amt/x1;
    printf("%d Notes of 100 dollar bill\n", y1);
    if (x1 > t_amt){
        printf("%d Notes of 100 dollar bill\n", y1=0);
    }
    r1 = t_amt%x1;
    
        
    }
    
    //Calculate for values of 50
    y2= r1/x2;
    printf("%d Notes of 50 dollar bill \n", y2);
    if (x2>r1) {
        printf("%d Notes of 50 dollar bill \n", y2=0);
    }
    r2 = r1%x2;
    
   // Calculate for values of 20
    y3=r2/x3;
    printf("%d Notes of 20 dollar bill \n", y3);
    if (x3>x2) {
        printf("%d Notes of 20 dollar bill \n",y3=0);
        
    }
    r3=r2%x3;
    
    //calculate for values of 10
    y4=r3/x4;
    
    if(x4>r3){
        printf("%d Notes of 10 dollar bill \n", y4=0);
    }
    else {
        printf("%d Notes of 10 dollar bill \n",y4);
    }
    r4=r3%x4;
    
    
    //Calculate for values of 5
    y5=r4/x5;
    
    if (x5>r4) {
        printf("%d Notes of 5 dollar bill \n",y5=0);
    }
    else {
        printf("%d Notes of 5 dollar bill \n", y5);
    }
    r5=r4%r5;
    
    
    //Calculate for values of 2
    y6=r5/x6;
    printf("%d Notes of 2 dollar bill \n", y6);
    if (x6>r5) {
        printf("%d Notes of 2 dollar bill", y6=0);
    }
    r6 = r5%r6;
    
    //Calculate for values of 1
    y7=r6/x7;
    printf("%d Notes of 1 dollar bill \n", y7);
    if(x7>r6){
        printf("%d Notes of 1 dollar bill \n", y7=0);
    }

    
    


}

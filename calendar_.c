//
//  calendar_.c
//  
//
//  Created by  Rob the deer on 20.05.2021.
//

#include <stdio.h>


int main()
{
    int n;
    int January, February, March, April, May,June, July ,August, September, October, November, December;
    
    printf("Enter a number of the month: \n");
    scanf("%d",&n);
    
    
    if( n >0 && n<=12 )
    {
        switch (n) {
            case 1:
                printf("January\n");
                break;
            case 2:
                printf("February\n");
                break;
            case 3: printf("March\n");break;
            case 4: printf("April\n");break;
            case 5: printf("May\n"); break;
            case 6: printf("June\n"); break;
            case 7: printf("July\n"); break;
            case 8: printf("August\n"); break;
            case 9: printf("September\n"); break;
            case 10: printf("October\n"); break;
            case 11: printf("November\n"); break;
            case 12: printf("December\n");
        }
    }
    else {
        printf("Error: no such month in my calendar.\n");
    }
    return 0;
}
// There are %d days before the given month

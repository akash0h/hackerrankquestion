#include <stdio.h>

int main() 
{
    int h,t;
    float cc;
    
    scanf("%d %f %d",&h, &cc, &t);
    if(h>=0 && h<=500 &&  cc>=0.0 && cc<=1.0 && t>=0 && t<=50000)
    {
        if(h>50 && cc<0.7 && t>5600)
        {
            printf( "The grade of the steel is: 10\n");
            printf("All of the conditions met.");
                
        }
        else if(h>50 && cc<0.7 && t<=5600)
            {
            printf( "The grade of the steel is: 9\n");
            printf("Two conditions met.");
                
        }
        else if(h<=50 && cc<0.7 && t>5600)
        {
            printf( "The grade of the steel is: 8\n");
            printf("Two conditions met.");
        }
        else if(h>50 && cc>=0.7 && t>5600)
        {
            printf( "The grade of the steel is: 7\n");
            printf("Two conditions met.");
        }
        // only one condition is met
        else if(h>50 && cc>=0.7 && t<=5600)
        {
            printf( "The grade of the steel is: 6\n");
            printf("Only one condition met.");
        }
        else if(h<=50 && cc<0.7 && t<=5600)
        {
            printf( "The grade of the steel is: 6\n");
            printf("Only one condition met.");
        }
        else if(h<=50 && cc>=0.7 && t>5600)
        {
            printf( "The grade of the steel is: 6\n");
            printf("Only one condition met.");
        }
        else if(h<=50 && cc>=0.7 && t<=5600)
        {
            printf( "The grade of the steel is: 5\n");
            printf("None of the conditions met.");
        }
    }
    
    return 0;
}

#include <stdio.h>

int main() 
{
    int year;
    scanf("%d",&year);
    if(year>1 && year%4==0)
    {
        printf("Yes, %d is a leap year.",year);
    }
    else if(year<1)
    {
        printf("The given year %d is Invalid year.",year);
    }
    else if(year%100==0 && year%400==0)
        {
            printf("Yes, %d is a leap year.",year);
        }
    
    else if(!(year%4==0))
    {
        printf("No, %d is not a leap year.",year);
    }
    else if(year>100000)
    {
        printf("The given year %d is Invalid year.",year);
    }
    
    
  
}

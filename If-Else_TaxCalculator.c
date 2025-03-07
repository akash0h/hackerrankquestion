#include <stdio.h>

int main() 
{
    float income,tax1,tax2,tax3;
    scanf("%f",&income);
    
    if(income>=0.0 && income<=250000.0)
    {
        printf("0.00");
    }
    else if(income>250000.0 && income<=500000.0)
    {
        tax1 = 0.05*(income-250000.0);
            printf("%.2f",tax1);
    }
    else if(income>500000 && income<=1000000)
    {
        tax1 = 0.05*(500000.0-250000.0);
        tax2 = tax1 + 0.20*(income-500000.0);
            printf("%.2f",tax2);
    }
    else if(income>1000000)
    {
        tax1 = 0.05*(500000.0-250000.0);
        tax2 = tax1 + 0.20*(1000000.0-500000.0);
        tax3 = tax2 + 0.30*(income-1000000.0);
            printf("%.2f",tax3);
    }
    else if(income<0)
    {
        printf("INVALID");
    }
    

}

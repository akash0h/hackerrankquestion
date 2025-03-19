#include <stdio.h>

int main() {
    int unit;
    float bill1,bill2,bill3,bill4;
    scanf("%d",&unit);
    if(unit>0 && unit<=100)
    {
        bill1 = unit*5;
            printf("The electricity bill is: %.2f.",bill1);
    }
    else if(unit>100 && unit<=300)
    {
        bill2 = 100*5 + (unit-100)*7;
        if(bill2<=1200)
        {
            bill3 = bill2 - bill2*.10;
            printf("The electricity bill is: %.2f.",bill3);
        }
        else{
            printf("The electricity bill is: %.2f.",bill2);
        }
            
    }
    else if(unit>300 && unit<=1000000)
    {
        bill4 = 100*5 + 200*7 + (unit-300)*10;
        printf("The electricity bill is: %.2f.",bill4);
        
    }
    else if(unit<0  )
    { 
        printf("Invalid Input!");
     }
    else if(unit>1000000){
        printf("Invalid Input!");
    }
    else if(unit<-1000000){
        printf("Invalid Input!");
    }
  
}

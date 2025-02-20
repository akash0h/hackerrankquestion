#include <stdio.h>

int main() {
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    scanf("%d",&budget);
    scanf("%d",&numGuests);
    scanf("%d",&foodCostPerGuest);
    scanf("%d",&decorationCost);
    scanf("%d",&musicCost);
    scanf("%d",&extraExpenses);
    
    

        
    
        if(numGuests>5 && numGuests<=50 && (decorationCost< 0.3*budget || foodCostPerGuest*numGuests< 0.5*budget) )
        {
            if(numGuests>25 &&  musicCost>0 && extraExpenses<(budget-foodCostPerGuest*numGuests-decorationCost-                         musicCost) && budget>(foodCostPerGuest*numGuests+decorationCost+  musicCost +  extraExpenses))
            {
                
                printf("Celebration Approved");
            }
            else if(numGuests<=25 &&  extraExpenses<(budget-foodCostPerGuest*numGuests-decorationCost) && budget>(foodCostPerGuest*numGuests+decorationCost + extraExpenses))
            {
                printf("Celebration Approved");
            }
            else{
                printf("Celebration Denied");
            }
               }      
               
        else{
            printf("Celebration Denied");
         }
    
    
    return 0;
}
               

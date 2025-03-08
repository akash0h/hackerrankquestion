#include <stdio.h>

int main() {

  int age, annualincome, risktolerence;
 
   scanf("%d",&age);
   scanf("%d",&annualincome);
   scanf("%d",&risktolerence);
    
    
   if(age>50  && ((annualincome <=75000) ||(annualincome >75000) )&& !(risktolerence==3))
   {
     printf("Low Risk Portfolio: Suitable for conservative investments.");
   } 
   else if(age>30 && annualincome <=30000 && ((risktolerence == 1)||(risktolerence == 2)))
   {
     printf("Low Risk Portfolio: Suitable for conservative investments.");
   } 
   else if (age >= 30 && age<=50 && annualincome <= 75000 && risktolerence == 2)
   {
     printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
   } 
    else if (age >= 30 && age<=50 && annualincome > 75000 && ((risktolerence == 1)||(risktolerence == 2)))
   {
     printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
   } 
   else if (age < 30)
   {
     printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
   
   } 
    else if (age >= 30 && age <= 50 && annualincome > 75000 && risktolerence == 3)
   {
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");

   }
    else if (age > 50 && risktolerence == 3 && annualincome>75000)
    {
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");

   }

     return 0;
}

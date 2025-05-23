#include <stdio.h>

int main() {
    long int n;
    scanf("%ld",&n);
    long int i=1;
    while(n>0)
    {
        
        if(n%i!=0)
        {
            break;
        }
       
        else if(n%i==0)
        {
         n=n/i;
        }
        ++i;
        
    }
    if(n==1)
    {
        printf("%ld",i-1);
    }
    else{
        printf("NO");
    }
    
    
} 

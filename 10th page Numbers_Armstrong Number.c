#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int initial=n;
    int orig=n*1;
    int sum=0;
    int count=0;
    
    int prod;
    
    while(orig!=0)
    {
        orig=orig/10;
        ++count;
    }
   
    for(int i=1; i<=count;++i)
    {
        int digit=n%10;
        prod=1;
        n=n/10;
        for(int j=1; j<=count; ++j)
        {
            prod=prod*digit;
        }
        
        sum=sum+prod;
    }
    
    if(sum==initial)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}

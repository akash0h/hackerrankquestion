#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=1; i<=n-1;++i)
    {
        if(n%i==0)
        {
            
            sum=sum + i;
            
        }
        
    }
    if(sum==n)
    {
        printf("YES");
        
    }
    else{
        printf("NO");
    }
    
}

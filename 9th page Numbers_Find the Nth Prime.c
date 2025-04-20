#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    
    int i;
    for(i=2; count<n; ++i)
    {
        int flag=1;
        for(int j=2; j*j<=i; ++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            ++count;
            
        }
        if(count==n)
        {
            break;
        }
        
        
    }
       printf("%d",i); 
            
        
}

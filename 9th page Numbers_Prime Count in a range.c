#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1, &n2);
    int count=0;
    for(int i=n1;i<=n2;++i)
    {
        int flag=1;
        for(int j=2; j<=i-1;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            
           printf("%d ",i);
        }
    }
    
    for(int i=n1;i<=n2;++i)
    {
        int flag=1;
        for(int j=2; j<=i-1;++j)
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
    }
    printf("\n%d",count);
    
   
    return 0;
}

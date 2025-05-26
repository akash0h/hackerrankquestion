#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int flag2=0;
    int i,p,q;
    int count=0;
    for(i=2; i<=n;++i)
    {   
        int flag=1;
        p=q;
        
        for(int j=2;j*j<=i;++j)   
        {
            
            
            if(i%j==0)
            {
                flag =0;
                break;
            }
            
        }
        if(flag==1)
        {
            if(flag2==0)
            {
                p=i;
                flag2=1;
            }
           else{
               q=i;
        
           }
        
        }
        if(q-p==2)
        {
            ++count;
        }
    }
    printf("%d",count);
    

}

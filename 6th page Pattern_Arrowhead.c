#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i;++j)
        {
            if(j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }

        
        printf("\n");
    }
    for(int i=1; i<=n;++i)
    {
        for(int j=1; j<=n-i;++j)
        {
            if(j==n-i || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else
    {
        printf("Shape Not Possible");
    }
    
    return 0;
}

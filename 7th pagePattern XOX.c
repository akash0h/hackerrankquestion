#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        if(n%2!=0)
        {
            for(int i=1; i<=n; ++i)
            {
                for(int j=1; j<=n; ++j)
                {
                  
                    int b=(n+1)/2;
                    if(j==b || i==b)
                    {
                        printf("x");
                    }
                    else
                    {
                        printf("o");
                    }
                        
                    
                   
                }
                printf("\n");
            }

        }
        else
        {
             for(int i=1; i<=n+1; ++i)
            {
                for(int j=1; j<=n+1; ++j)
                {
                    
                    int c=n/2 +1;
                    if(j==c ||i==c)
                    {
                        printf("x");
                    }
                    else
                    {
                        printf("o");
                    }
                    
                    
                }
                printf("\n");
            }
        }
    }
    else
    {
        printf("Shape Not Possible");
    }

    return 0;
}

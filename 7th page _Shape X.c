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
                    if(i==j|| j==n+1-i)
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
             for(int i=1; i<=n+1; ++i)
            {
                for(int j=1; j<=n+1; ++j)
                {
                    if(i==j|| j==n+2-i)
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
    }
    else
    {
        printf("Shape Not Possible");
    }

    return 0;
}

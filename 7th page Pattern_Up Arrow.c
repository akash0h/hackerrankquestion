#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        n=n+1;
    }
    
    int b=n/2;
    if(n>2)
    {
        for(int i=1; i<=b; ++i)
    {
        for(int k=1; k<=b-i;++k)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; ++j)
        {
            if(j==1 || j==(2*i)-1 || j==(2*i)/2 )
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
    for(int i=1; i<=b; ++i)
        {
            for(int j=1;j<=n;++j)
            {
                if(j==b)
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

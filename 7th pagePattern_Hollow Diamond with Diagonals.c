#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        for(int i=1; i<=n; ++i)
    {
        for(int k=1; k<=n-i;++k)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; ++j)
        {
            if(j==1 || j==(2*i)-1 || j==i ||i==n)
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
    for(int i=1; i<=n-1; ++i)
    {
        for(int k=1; k<=i;++k)
        {
            printf(" ");
        }
        for(int j=1; j<=2*(n-i+1)-3; ++j)
        {
            if(j==1 || j==2*(n-i+1)-3 || j==(n-1)-i+1)
            {
                printf("*");
            }
            else{
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
    

}

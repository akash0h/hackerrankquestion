 #include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            if(j==1 || i==n || j==2*n || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(int k=1; k<=2*n-(2*i); ++k)
        {
            printf(" ");
        }
        for(int j=1; j<=i; ++j)
        {
            if(j==1 || i==n || j==2*n || j==i)
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
    
return 5;
}

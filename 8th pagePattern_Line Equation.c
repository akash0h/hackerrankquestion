#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n-1; ++i)
    {
        for(int j=0; j<=n-1; ++j)
        {

            if((i==0 ||j==n/2 ||i==n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");


        // printing N

        for(int j=0; j<=n-1; ++j)
        {

            if((j==0 || j==n-1 || i==j) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        for(int j=0; j<=n-1; ++j)
        {

            if((j==0 || j==n-1 || i==j) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // printing O

        for(int j=0; j<=n-1; ++j)
        {

            if((i==0 && j!=0 && j!=n-1) || (j==n-1 && i!=0 && i!=n-1) || (i==n-1 && j!=n-1 && j!=0) || (j==0 && i!=0 && i!=n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // printing v


        for(int j=0; j<=(2*n)-1; ++j)
        {

            if( (i==j ) || (i+j==2*n-2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("  ");


        // printing A

        for(int j=0; j<=n-1; ++j)
        {

            if(((j==0 || j==n-1 )&& i!=0) || (i==0 && j!=0 && j!=n-1) || (i==n/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        // printing T

        for(int j=0; j<=n-1; ++j)
        {
            if((i==0 || j==n/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }



        }
        printf("  ");
        
        // printing I
        for(int j=0; j<=n-1; ++j)
        {

            if((i==0 ||j==n/2 ||i==n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        
         // printing O

        for(int j=0; j<=n-1; ++j)
        {

            if((i==0 && j!=0 && j!=n-1) || (j==n-1 && i!=0 && i!=n-1) || (i==n-1 && j!=n-1 && j!=0) || (j==0 && i!=0 && i!=n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        
        // printing N

        for(int j=0; j<=n-1; ++j)
        {

            if((j==0 || j==n-1 || i==j) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        


        printf("\n");


    }
    return 0;
}

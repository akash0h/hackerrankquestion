#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
    
    for(i=1; i<=n;++i)
    {
         int num=i;
        for(int k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(int j=1;j<=i;++j)
        {
            if(j<=i)
            {
                printf("%d",--num);
            }
            
        }
        for(int j=1;j<=i-1;++j)
        {
            printf("%d",++num);
        }
        printf("\n");
    }
    return 0;
}

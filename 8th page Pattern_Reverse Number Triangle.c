#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        sum=sum+i;
        int b=sum;
        for(int j=1;j<=i;++j)
        {
            
            if(j==1)
            {
                printf("%d ",sum);
            }
            else{
                printf("%d ",--b);
            }
        }
        printf("\n");
    }
    
    return 0;
}

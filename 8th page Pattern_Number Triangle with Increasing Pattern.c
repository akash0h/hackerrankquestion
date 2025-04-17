#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;++i)
    {
        int a=i;
        for(int j=1;j<=i;++j)
        {
        
            if(j==1)
            {
                printf("%d ",i);
                
            }
            else
            {
                a=a+(n-j+1);
                
                // cause first time if a =7 when j=2 then second time that a's value will not start from value of i it will start from a's recent                 value like here a=7 then when j=3 it will be 10 cause 7 +n-j+1{n=5, j=3}
                
                printf("%d ",a);
            }
            
        }
        printf("\n");
    }
    return 0;
}

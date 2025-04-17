#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n; n>1;n=n)
    {
        {
            printf("%d -> ",n);
            if(n%2==0)
            {
                n=n/2;
            }
            else
        {
            n = 3*n + 1;
        }
        }
        
    }
    printf("1");

}

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
    }
    else
    {
        int i;
        for(i=1;(n&1)==0;++i)
        {
            n=n>>1;
        }
        printf("%d",i);
    }
}

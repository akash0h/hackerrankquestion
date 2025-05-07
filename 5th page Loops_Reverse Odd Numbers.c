#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    a=(n*2)-1;
    for(int i=1; i<=n-1; ++i)
    {
        
        printf("%d ",a);
        a=a-2;
    }
    if(n>0)
    printf("1.");

}

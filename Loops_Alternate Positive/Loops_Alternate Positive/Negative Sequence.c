#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n;++i)
    {
        if(a%2!=0)
        {
            printf("%d ",a);
        }
        else{
            printf("%d ",-a);
        }
        
        ++a;
    }
    return 0;
}

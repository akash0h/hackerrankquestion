#include <stdio.h>

int main() {
    long long n;
    scanf("%lld",&n);
    long long  num=0;
    long long  count=0;
    if(n<0)
    {
        n=-n;
    }
    while(n!=0)
    {
        num=n%10;

        if(num==2 || num==3 || num==5 || num==7)
        {
            ++count;

        }

        n=n/10;
    }
    printf("%lld",count);
    return 0;
}

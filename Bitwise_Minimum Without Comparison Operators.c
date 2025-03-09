#include <stdio.h>

int main() {
    int a,b,m,min;
    scanf("%d %d",&a,&b);
    m=(a-b)>>31&1;
    min=(a*m + b*(1-m));
    printf("%d",min);
        
    return 0;
}

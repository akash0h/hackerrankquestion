#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=10; ++i)
    {
        int c= 1*i;
        int d=n*i;
        printf("%d x %d = %d",n,c,d);
        printf("\n");
    }
    return 0;
}

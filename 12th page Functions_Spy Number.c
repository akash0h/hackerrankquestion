#include <stdio.h>

int is_spy_number(int n) {
    int num1=n;
    int sum=0;
    int prod=1;
    while(n!=0)
    {
        num1=n%10;
        sum=sum + num1;
        prod=prod*num1;
        n=n/10;
        
    }
    if(sum==prod)
        {
            return 1;
        }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_spy_number(n));
    return 0;
}

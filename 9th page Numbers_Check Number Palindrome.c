#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int original=n;
    int rev=0;
    
    while(n!=0)
    {
        int b=n%10;
        rev= rev*10 +b;
        n=n/10;
        
    }
    if(rev==original)
    {
        printf("YES");
    }
    
    else{
        printf("NO");
    }
    
    return 0;
}

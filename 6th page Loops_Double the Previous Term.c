#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        
    }
    else{
     int a=1;
    printf("<");
    for(int i=1; i<=n; ++i)
    {
        
        printf("%d",a);
        if(i<=n-1){
        printf(" ");
        }
        a=a*2; 
        
    }
       printf(">");
    }
    
    return 0;
}

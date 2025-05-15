#include <stdio.h>

int main() {
    int num,b,c;
    scanf("%d",&num);
    b=num>>1;
    c=((num<<2) - b);
    if(num%2==0){
       printf("%d",c); 
    }
    else if(num%2 !=0){
        printf("%d",c-1);
    }
    
    return 0;
    
}

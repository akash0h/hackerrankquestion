#include <stdio.h>

int main() {
    int num,a,b,c,d,res;  
    scanf("%d",&num);
    a= num&1;
    b=(num>>1)&1;
    c=(num>>2)&1;
    d=(num>>3)&1;
    res =a+b+c+d;
    printf("%d",res);
    return 0;
}

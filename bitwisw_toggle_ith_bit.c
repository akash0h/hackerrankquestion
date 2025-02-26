#include <stdio.h>

int main() 
{
    int  num,i;
    scanf("%d",&num);
    scanf("%d",&i);
    num= num ^(1<<i);
    printf("%d",num);
    return 0;
}

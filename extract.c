#include <stdio.h>

int main() {
    int n,i;
    scanf("%d %d",&n,&i);
    int position = (n>>i) & 1; // cause whichever bit we want to print bring it rightmost side and tat bit in in right now & it with 1 therefore if it is 0 then 0 will be printed and if 1 then 1
    printf("%d",position);
        
    return 0;
}

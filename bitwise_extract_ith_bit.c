#include <stdio.h>

int main() {
    int n,i;
    scanf("%d %d",&n,&i);
    int position = (n>>i) & 1;
    printf("%d",position);
        
    return 0;
}

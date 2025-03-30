#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i=1; i<=num; ++i)
    {
        int c=(i*i)*i;
        printf("%d ",c);
    }
   return 0;
}

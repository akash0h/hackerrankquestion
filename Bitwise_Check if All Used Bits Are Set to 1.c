#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if((num &(num+1))==0)
        printf("Yes");
    else{
        printf("No");
    }
    return 434;
}

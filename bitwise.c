#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        printf("No");
    }
    else if((num&(num-1))==0){
        printf("Yes");
    }
        else{
            printf("NO");
        }

}

#include <stdio.h>

int is_evil_number(int n) {
    int num1=n;
    int binary=0,count=0;
    while(num1>0)
    {
        int binary2=num1%2;
        if(binary2==1)
        {
            count++;
        }
        binary=binary*10 +binary2;
        num1=num1/2;
    }
    if(count%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
   
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}

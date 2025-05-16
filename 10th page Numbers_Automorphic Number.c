#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int num1=n;
    int count=0;
    int sepn1,sepn2;
    int rev1=0;  //why if i dont do rev=0 the output is coming too long
    int rev2=0;
    int num2=n*n;
    
    while(num1>0)
    {
        sepn1=num1%10;
        ++count;           //++count cause how many digit will be on num1 that must should be in num2
        rev1=rev1*10 + sepn1;
        num1=num1/10;
    }

    for(int i=1; i<=count;++i)
    {
        sepn2=num2%10;
        rev2=rev2*10 + sepn2;
        num2=num2/10;
    }

    
    if(rev1==rev2)
    {
        printf("%d is automorphic",n);
    }
    else{
        printf("%d is not automorphic",n);
    }
    
    
    return 0;
}

#include <stdio.h>

int main() {
    int n, maxNumber;
    scanf("%d", &n);
    maxNumber = n;
    
    printf("%d", n);
    
    for (; n != 1;)
    {
        if (n < 1) 
        {
            n = 1; 
        } 
        else if (n % 3 == 0) 
        {
            n /= 3;   
        }
        else if (n % 5 == 0 )
        {
            n -= 5;   
        } else 
        {
            n *= 5;  
        }

        if (n > maxNumber)
        {
            maxNumber = n;
        }

 
        printf(" -> %d", n);
    }
    printf("\nMax Number: %d\n", maxNumber);

    return 0;
}

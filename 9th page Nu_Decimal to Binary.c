#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int initial=n;
    
    int building_bit = 0;
    int bit=0;
    int x=1;
    while(n!=0)
    {
        bit=n%2;
        building_bit = building_bit + bit*x;
        x = x*10;
        n=n/2;
    }
    printf("Binary equivalent of %d: %d", initial, building_bit);
    
    return 0;
}

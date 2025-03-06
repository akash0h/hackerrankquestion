#include <stdio.h>

int differ_by_one_bit(int a, int b) {
    int xor_result = a ^ b;  

    return (xor_result != 0) && ((xor_result & (xor_result - 1)) == 0);
}

int main() {
    int a, b;
    // Input the two integers
    scanf("%d %d", &a, &b);
    

    if (differ_by_one_bit(a, b)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}

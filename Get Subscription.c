#include <stdio.h>

int main() {
    int T, X;
    

    scanf("%d", &T);
    
    while (T--) {

        scanf("%d", &X);
        

        if (X > 30) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

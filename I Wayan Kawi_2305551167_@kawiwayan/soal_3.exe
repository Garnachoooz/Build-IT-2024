#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, prima = 1; 
    

    scanf("%d", &n);
    

    if (n < 2) {
        printf("BUKAN\n");
        return 0;
    }
    

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prima = 0; 
            break;
        }
    }
    

    if (prima) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char s1[101], s2[101];
    

    scanf("%s", s1);
    scanf("%s", s2);
    

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    

    if (len1 != len2) {
        printf("BERBEDA\n");
    } else {

        if (strcmp(s1, s2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}
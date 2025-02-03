#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n); 
    if (n >= 0 && n < (sizeof(int) * 8)) { 
        int bit = (num >> n) & 1; 
        printf("%d\n", bit);
    } else {
        printf("Invalid bit position\n"); 
    }

    return 0;
}

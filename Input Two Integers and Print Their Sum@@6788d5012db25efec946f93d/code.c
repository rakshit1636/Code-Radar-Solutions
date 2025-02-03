#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input from the user
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);

    // Printing the sum of the two integers
    printf("Sum: %d\n", a + b);

    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2, result;
        printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 & num2;
    printf("Result of %d & %d = %d\n", num1, num2, result);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char name[50], hobby[50];
    int age;

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // Consume the leftover newline character

    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    // Removing newline character from hobby if present
    size_t len = strlen(hobby);
    if (len > 0 && hobby[len - 1] == '\n') {
        hobby[len - 1] = '\0';
    }

    // Printing output
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
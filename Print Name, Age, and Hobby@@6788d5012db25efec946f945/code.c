#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;

    // Taking input
    printf("Enter your name, age, and hobby:\n");
    scanf("%s %d", name, &age);
    getchar(); // To consume the newline character left by scanf
    fgets(hobby, sizeof(hobby), stdin);

    // Removing newline character from hobby if present
    if (hobby[strlen(hobby) - 1] == '\n') {
        hobby[strlen(hobby) - 1] = '\0';
    }

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char name[50], hobby[50];
    int age;

    printf("");
    scanf("%s", name);

    printf("");
    scanf("%d", &age);
    getchar(); 

    printf("");
    fgets(hobby, sizeof(hobby), stdin);

    size_t len = strlen(hobby);
    if (len > 0 && hobby[len - 1] == '\n') {
        hobby[len - 1] = '\0';
    }

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
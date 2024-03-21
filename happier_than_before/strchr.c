#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *original = "Hello, World!";
    char *duplicate = strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Remember to free the dynamically allocated memory
        free(duplicate);
    } else {
        fprintf(stderr, "Memory allocation failed\n");
    }

    return 0;
}
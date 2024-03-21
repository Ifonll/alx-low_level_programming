#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        // Display prompt
        printf("YourShell> ");

        // Read user input
        char userInput[256];
        if (fgets(userInput, sizeof(userInput), stdin) == NULL) {
            // Handle end of file (Ctrl+D)
            printf("\nExiting shell.\n");
            break;
        }

        // Execute the command
        int result = system(userInput);

        // Check for errors
        if (result == -1) {
            perror("Error executing command");
        }
    }

    return 0;
}
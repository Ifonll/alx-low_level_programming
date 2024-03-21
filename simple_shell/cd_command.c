#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        // Print an error message if the number of arguments is incorrect
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        return 1;  // Return a non-zero value to indicate failure
    }

    // Attempt to change the current working directory
    if (chdir(argv[1]) != 0) {
        perror("cd");  // Print an error message if chdir fails
        return 1;      // Return a non-zero value to indicate failure
    }

    // Print the current working directory after the change
    char cwd[4096];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current directory: %s\n", cwd);
    } else {
        perror("getcwd");  // Print an error message if getcwd fails
        return 1;          // Return a non-zero value to indicate failure
    }

    return 0;  // Return 0 to indicate success
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read; //signed size 

    // Read a line from standard input
    printf("Enter a line: ");
    read = getline(&line, &len, stdin);

    if (read != -1) {
        printf("Read %zd characters:\n", read);         //zd is a format specifier is used to print a value of type ssize
        printf("Line: %s", line);
    } else {
        printf("Error reading line\n");
    }
}
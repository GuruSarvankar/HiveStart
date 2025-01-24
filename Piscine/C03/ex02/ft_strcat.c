#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
    char *dest_start = dest;

    // Move the pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy characters from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the null terminator at the end
    *dest = '\0';

    return dest_start; // Return the start of the destination string
}

// Example usage
int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    char *result = ft_strcat(dest, src);

    printf("Concatenated string: %s\n", result);

    return 0;
}

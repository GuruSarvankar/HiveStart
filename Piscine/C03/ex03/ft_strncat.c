#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    char *dest_start = dest;
    unsigned int i = 0;

    // Move the pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Append up to 'nb' characters from 'src' to 'dest'
    while (*src != '\0' && i < nb) {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    // Add the null terminator at the end
    *dest = '\0';

    return dest_start; // Return the start of the destination string
}

// Example usage
int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    
    // Append only 3 characters from src to dest
    char *result = ft_strncat(dest, src, 3);

    printf("Resulting string: %s\n", result);

    return 0;
}

#include <stddef.h> // For NULL (optional)

char *ft_strcpy(char *dest, char *src) {
    char *original_dest = dest;

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string

    return original_dest;
}

#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    ft_strcpy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

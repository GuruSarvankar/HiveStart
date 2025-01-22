char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    while (i < n) {
        dest[i] = '\0'; // Null-pad if `src` is shorter than `n`
        i++;
    }

    return dest;
}


#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    ft_strncpy(dest, src, 5);
    dest[19] = '\0'; // Safety null termination if `n` exceeds `dest` size
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

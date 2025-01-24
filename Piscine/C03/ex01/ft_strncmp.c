#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i = 0;

    // Compare characters up to n or until a null terminator is reached
    while (i < n && (*s1 || *s2)) {
        if (*s1 != *s2) {
            return *(unsigned char *)s1 - *(unsigned char *)s2;
        }
        s1++;
        s2++;
        i++;
    }

    return 0; // Return 0 if no differences are found within the first n characters
}

// Example usage
int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = ft_strncmp(str1, str2, 3);

    if (result < 0) {
        printf("The first 3 characters of '%s' are less than '%s'.\n", str1, str2);
    } else if (result > 0) {
        printf("The first 3 characters of '%s' are greater than '%s'.\n", str1, str2);
    } else {
        printf("The first 3 characters of '%s' are equal to '%s'.\n", str1, str2);
    }

    return 0;
}

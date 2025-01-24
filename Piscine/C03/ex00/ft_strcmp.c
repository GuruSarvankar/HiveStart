#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// Example usage
int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = ft_strcmp(str1, str2);

    if (result < 0) {
        printf("'%s' is less than '%s'.\n", str1, str2);
    } else if (result > 0) {
        printf("'%s' is greater than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is equal to '%s'.\n", str1, str2);
    }

    return 0;
}

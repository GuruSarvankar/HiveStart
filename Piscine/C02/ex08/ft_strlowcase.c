char *ft_strlowcase(char *str) {
    char *ptr = str;

    while (*ptr) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + 'a' - 'A'; // Convert uppercase to lowercase
        }
        ptr++;
    }

    return str; // Return the modified string
}
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    ft_strlowcase(str);
    printf("Transformed string: %s\n", str); // Should print "hello, world!"

    return 0;
}

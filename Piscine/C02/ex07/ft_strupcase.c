char *ft_strupcase(char *str) {
    char *ptr = str;

    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 'a' + 'A'; // Convert lowercase to uppercase
        }
        ptr++;
    }

    return str; // Return the modified string
}
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    ft_strupcase(str);
    printf("Transformed string: %s\n", str); // Should print "HELLO, WORLD!"

    return 0;
}

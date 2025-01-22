int ft_str_is_printable(char *str) {
    if (*str == '\0') {
        return 1; // Return 1 if the string is empty
    }

    while (*str) {
        if (*str < 32 || *str > 126) {
            return 0; // Return 0 if a non-printable character is found
        }
        str++;
    }

    return 1; // Return 1 if all characters are printable
}

#include <stdio.h>

int main() {
    char str1[] = "Hello123!";
    char str2[] = "Hello\tWorld";
    char str3[] = "";
    
    printf("Is '%s' printable? %d\n", str1, ft_str_is_printable(str1)); // Should return 1
    printf("Is '%s' printable? %d\n", str2, ft_str_is_printable(str2)); // Should return 0
    printf("Is empty string printable? %d\n", ft_str_is_printable(str3)); // Should return 1

    return 0;
}

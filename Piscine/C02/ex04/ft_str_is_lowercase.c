int ft_str_is_lowercase(char *str) {
    if (*str == '\0') {
        return 1; // Return 1 if the string is empty
    }

    while (*str) {
        if (*str < 'a' || *str > 'z') {
            return 0; // Return 0 if any character is not a lowercase letter
        }
        str++;
    }

    return 1; // Return 1 if all characters are lowercase letters
}

#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "";
    
    printf("Is '%s' lowercase? %d\n", str1, ft_str_is_lowercase(str1)); // Should return 1
    printf("Is '%s' lowercase? %d\n", str2, ft_str_is_lowercase(str2)); // Should return 0
    printf("Is empty string lowercase? %d\n", ft_str_is_lowercase(str3)); // Should return 1

    return 0;
}

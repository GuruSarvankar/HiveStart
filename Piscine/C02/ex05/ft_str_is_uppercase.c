int ft_str_is_uppercase(char *str) {
    if (*str == '\0') {
        return 1; // Return 1 if the string is empty
    }

    while (*str) {
        if (*str < 'A' || *str > 'Z') {
            return 0; // Return 0 if any character is not an uppercase letter
        }
        str++;
    }

    return 1; // Return 1 if all characters are uppercase letters
}

#include <stdio.h>

int main() {
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "";
    
    printf("Is '%s' uppercase? %d\n", str1, ft_str_is_uppercase(str1)); // Should return 1
    printf("Is '%s' uppercase? %d\n", str2, ft_str_is_uppercase(str2)); // Should return 0
    printf("Is empty string uppercase? %d\n", ft_str_is_uppercase(str3)); // Should return 1

    return 0;
}

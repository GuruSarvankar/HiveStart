int ft_str_is_alpha(char *str) {
    if (*str == '\0') {
        return 1; // Return 1 if the string is empty
    }

    while (*str) {
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')) {
            return 0; // Return 0 if a non-alphabetical character is found
        }
        str++;
    }

    return 1; // Return 1 if all characters are alphabetical
}

#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "";
    
    printf("Is '%s' alpha? %d\n", str1, ft_str_is_alpha(str1)); // Should return 1
    printf("Is '%s' alpha? %d\n", str2, ft_str_is_alpha(str2)); // Should return 0
    printf("Is empty string alpha? %d\n", ft_str_is_alpha(str3)); // Should return 1

    return 0;
}

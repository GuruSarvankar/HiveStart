int ft_str_is_numeric(char *str) {
    if (*str == '\0') {
        return 1; // Return 1 if the string is empty
    }

    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Return 0 if any non-digit character is found
        }
        str++;
    }

    return 1; // Return 1 if all characters are digits
}


#include <stdio.h>

int main() {
    char str1[] = "12345";
    char str2[] = "123a45";
    char str3[] = "";
    
    printf("Is '%s' numeric? %d\n", str1, ft_str_is_numeric(str1)); // Should return 1
    printf("Is '%s' numeric? %d\n", str2, ft_str_is_numeric(str2)); // Should return 0
    printf("Is empty string numeric? %d\n", ft_str_is_numeric(str3)); // Should return 1

    return 0;
}

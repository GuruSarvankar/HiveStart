#include <stdio.h>

// Function prototype
int ft_strlen(char *str);

// Function implementation
int ft_strlen(char *str) {
    int count = 0;

    // Iterate through the string until the null terminator is encountered
    while (str[count] != '\0') {
        count++;
    }

    return count;
}

// Example usage
int main() {
    char example[] = "Hello, world!";
    int length = ft_strlen(example);

    printf("The length of the string is: %d\n", length);

    return 0;
}

#include <unistd.h>

// Function prototype
void ft_putstr(char *str);

// Function implementation
void ft_putstr(char *str) {
    int i = 0;

    // Iterate through the string and write each character
    while (str[i] != '\0') {
        write(1, &str[i], 1); // Write one character at a time to standard output
        i++;
    }
}

// Example usage
int main() {
    char example[] = "Hello, world!";
    ft_putstr(example);

    return 0;
}

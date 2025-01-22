#include <unistd.h>

void ft_putstr(char *str) {
    int i = 0;

    while (str[i] != '\0') { // Loop through each character until the null terminator
        write(1, &str[i], 1); // Write each character to the standard output
        i++;
    }
}

int main() {
    char *message = "Hello, World!\n";

    ft_putstr(message); // Call the function to display the string

    return 0;
}

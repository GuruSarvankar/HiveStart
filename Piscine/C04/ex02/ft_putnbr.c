#include <unistd.h>

// Helper function to write a single character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to display an integer
void ft_putnbr(int nb) {
    // Handle the special case for the minimum integer value
    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return;
    }

    // If the number is negative, print the '-' sign and make the number positive
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }

    // Recursive case: if the number has more than one digit, recursively process the rest
    if (nb > 9) {
        ft_putnbr(nb / 10);
    }

    // Print the last digit
    ft_putchar((nb % 10) + '0');
}

// Example usage
int main() {
    ft_putnbr(42);        // Displays: 42
    write(1, "\n", 1);
    ft_putnbr(-123456);   // Displays: -123456
    write(1, "\n", 1);
    ft_putnbr(0);         // Displays: 0
    write(1, "\n", 1);
    ft_putnbr(-2147483648); // Displays: -2147483648
    write(1, "\n", 1);

    return 0;
}

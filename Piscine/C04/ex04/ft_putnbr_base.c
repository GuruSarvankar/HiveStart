#include <unistd.h>

// Helper function to check if the base is valid
int is_base_valid(char *base) {
    int i = 0;
    int j;

    // Check if the base is empty or has a length of 1
    if (!base || base[0] == '\0' || base[1] == '\0') {
        return 0;
    }

    // Check for duplicate characters in the base
    while (base[i]) {
        if (base[i] == '+' || base[i] == '-') {
            return 0;  // Base should not contain '+' or '-'
        }
        j = i + 1;
        while (base[j]) {
            if (base[i] == base[j]) {
                return 0;  // Duplicate characters in the base
            }
            j++;
        }
        i++;
    }
    return 1;  // Valid base
}

// Helper function to write a character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to convert and display the number in the given base
void ft_putnbr_base(int nbr, char *base) {
    int base_len;
    
    // Check if the base is valid
    if (!is_base_valid(base)) {
        return;
    }

    // Calculate the base length
    base_len = 0;
    while (base[base_len]) {
        base_len++;
    }

    // Handle negative numbers
    if (nbr < 0) {
        ft_putchar('-');
        nbr = -nbr;
    }

    // Recursive case to print the number in the given base
    if (nbr >= base_len) {
        ft_putnbr_base(nbr / base_len, base);  // Recurse with the quotient
    }
    
    // Print the current digit
    ft_putchar(base[nbr % base_len]);
}

// Example usage
int main() {
    ft_putnbr_base(42, "0123456789");        // Decimal base
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789");       // Decimal base with negative number
    write(1, "\n", 1);
    ft_putnbr_base(42, "01");                // Binary base
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF");  // Hexadecimal base
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif");          // Custom octal base
    write(1, "\n", 1);

    return 0;
}

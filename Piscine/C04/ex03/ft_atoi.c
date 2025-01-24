#include <unistd.h>
#include <ctype.h>  // For isspace function

// Function to convert string to integer
int ft_atoi(char *str) {
    int result = 0;
    int sign = 1;

    // Skip leading whitespaces
    while (*str && isspace(*str)) {
        str++;
    }

    // Handle the signs (+ or -)
    while (*str == '+' || *str == '-') {
        if (*str == '-') {
            sign = -sign;  // Flip sign on each '-'
        }
        str++;
    }

    // Convert the digits to integer
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');  // Build the number
        str++;
    }

    return result * sign;  // Apply the sign to the result
}

// Example usage
int main() {
    char str1[] = " ---+--+1234ab567";
    char str2[] = "   -42abc";
    char str3[] = "  +00123456";

    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);

    // Display the results
    write(1, "Result 1: ", 10);
    write(1, &num1, sizeof(num1));
    write(1, "\n", 1);
    
    write(1, "Result 2: ", 10);
    write(1, &num2, sizeof(num2));
    write(1, "\n", 1);
    
    write(1, "Result 3: ", 10);
    write(1, &num3, sizeof(num3));
    write(1, "\n", 1);

    return 0;
}

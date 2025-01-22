#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {

        *div = a / b;   // Store the quotient in the memory location pointed to by div
        *mod = a % b;   // Store the remainder in the memory location pointed to by mod

}

int main() {
    int a = 42;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod); // Pass addresses of div and mod to store results

    printf("Division result: %d\n", div);  // Quotient
    printf("Modulo result: %d\n", mod);    // Remainder

    return 0;
}

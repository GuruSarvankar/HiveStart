#include<stdio.h>

void    ft_swap(int *a, int *b) 
{
    int temp = *a; // Store the value of *a in a temporary variable
    *a = *b;       // Assign the value of *b to *a
    *b = temp;     // Assign the stored value (temp) to *b
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before ft_swap: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y); // Pass the addresses of x and y to ft_swap

    printf("After ft_swap: x = %d, y = %d\n", x, y);

    return 0;
}
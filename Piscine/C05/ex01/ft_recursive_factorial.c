int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0; // Return 0 if the number is negative, as factorial is not defined for negative numbers
    if (nb == 0)
        return 1; // Return 1 because 0! = 1
    return nb * ft_recursive_factorial(nb - 1); // Multiply the current number by the factorial of (nb - 1)
}

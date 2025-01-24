int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0; // Return 0 for negative powers
    if (power == 0)
        return 1; // Any number to the power of 0 (including 0^0) is 1
    return nb * ft_recursive_power(nb, power - 1); // Multiply nb by the result of the function with (power - 1)
}

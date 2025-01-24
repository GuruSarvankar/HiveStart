int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return 0; // Return 0 for negative powers
    if (power == 0)
        return 1; // Any number to the power of 0 (including 0^0) is 1

    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= nb; // Multiply the result by nb for each iteration
    }

    return result;
}

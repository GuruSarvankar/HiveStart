int ft_iterative_factorial(int nb)
{
    if (nb < 0)
        return 0; // Return 0 if the number is negative, as factorial is not defined for negative numbers
    if (nb == 0)
        return 1; // Return 1 because 0! = 1
    
    int result = 1;
    for (int i = 1; i <= nb; i++)
    {
        result *= i; // Multiply result by i at each iteration
    }
    
    return result;
}

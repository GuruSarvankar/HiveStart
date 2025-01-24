int ft_sqrt(int nb)
{
    if (nb < 0)
        return 0; // Return 0 for negative numbers, as square root is undefined for them

    int i = 0;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return i; // Return i if it's the exact square root of nb
        i++;
        if (i > 46340) // Prevent overflow as 46341^2 > INT_MAX
            return 0;
    }

    return 0; // Return 0 if no integer square root exists
}

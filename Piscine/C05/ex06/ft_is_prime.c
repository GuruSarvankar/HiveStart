int ft_is_prime(int nb)
{
    if (nb <= 1)
        return 0; // 0 and 1 are not prime numbers
    if (nb == 2)
        return 1; // 2 is the only even prime number
    
    for (int i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
            return 0; // If nb is divisible by i, it is not a prime number
    }
    
    return 1; // If no divisors are found, nb is prime
}

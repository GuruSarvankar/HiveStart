int ft_fibonacci(int index)
{
    if (index < 0)
        return -1; // Return -1 for negative indices as they are invalid
    if (index == 0)
        return 0; // The 0th Fibonacci number is 0
    if (index == 1)
        return 1; // The 1st Fibonacci number is 1
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2); // Recursive calculation
}

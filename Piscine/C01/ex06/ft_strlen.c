int ft_strlen(char *str) {
    int count = 0;        // Initialize the counter to 0

    while (str[count] != '\0') { // Loop until the null terminator is encountered
        count++;                // Increment the counter for each character
    }

    return count; // Return the total count of characters
}

int main() {
    char *message = "Hello, World!";
    int length;

    length = ft_strlen(message); // Call the function to calculate the string length

    // Print the result (optional, requires printf or write if allowed)
    // printf("The length of the string is: %d\n", length);

    return 0;
}

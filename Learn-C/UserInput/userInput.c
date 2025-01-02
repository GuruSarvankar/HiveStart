// Online C compiler to run C program online    -  https://www.programiz.com/c-programming/online-compiler/
#include <stdio.h>

int main() {
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
  printf("Type a number and press enter: \n");

    // Get and save the number the user types
    if (scanf("%d", &myNum) != 1) {
        printf("Error reading input\n");
        return 1; // Return an error code if input is invalid
    }

    // Print the number the user typed
     printf("Your number is: %d\n", myNum);



    return 0;
}

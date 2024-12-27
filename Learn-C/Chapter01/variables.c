#include<stdio.h>

int main() {

    // dataType  variableName = Value

    int myNum = 15;
    float myFloatNum = 20.5;
    char myLetter = 'H';  // Char value should be in SINGLE QUOTES

    printf("The number is %d\n" , myNum);   // %d is format specifier, which tell compiler the what type of data is var storing
    printf("The floating Number is %f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My number is  %d and my letter is %c" , myNum, myLetter);
    return 0;
}
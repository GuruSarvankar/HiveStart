#include<stdio.h>

int main() {
    int myNum = 5;
    float myFloatNum = 7.25;
    char myLetter= 'S';

    printf("%d\n", myNum); // %d or %i - 2 or 4 bytes
    printf("%f\n", myFloatNum); // %f - 4 bytes , sufficient for 6-7 decimal points
    printf("%c\n", myLetter); // %c - 1 bytes, store single character/letter/number or ASCII value
}
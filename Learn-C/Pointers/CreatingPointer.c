#include<stdio.h>

int main(){
    int myAge = 43;
    int* agePtr= &myAge; // a pointer variable created with "*"(int*) sign on data type and var called with "&"(&myAge) sign 

    printf("Age is : %d\n", myAge);
    printf("Memory location of Age : %p\n", myAge);
    printf("Memory location of Age var : %p\n", agePtr);

    printf("Get value of Pointer : %d", *agePtr);
}
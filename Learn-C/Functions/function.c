#include<stdio.h>

void testFunction() {           // void means that function does not have a return value
    printf("Execute the function\n");
}
void calculateSum() {
    int x = 10;
    int y = 20;
    int sum = x + y;
    printf("x + y = %d\n");

    testFunction();     // function inside function
}
void userDetails(char userName[20], int userAge) {  // declared the parameters in the function
    printf("User details are : %s %d\n", userName, userAge);
}

int main(){         // main is also a function
    testFunction();
    calculateSum();
    userDetails("John", 43);
    return 0;
}
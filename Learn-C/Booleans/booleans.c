#include<stdio.h>
#include<stdbool.h>

int main(){
    bool isCodingFun = true;
    bool isDesignBoring = false;

    printf("Is coding fun = %d\n" , isCodingFun);
    printf("Is Design boring = %d\n" , isDesignBoring);

    // comparing values and variables
    printf("%d\n", isCodingFun == isDesignBoring);  // result is false = 0
    printf("%d\n", !(isCodingFun == isDesignBoring));  // result is true = 1 because !(not) operator used
}
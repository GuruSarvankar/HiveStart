#include<stdio.h>

int main() {
    int x =5, y =6, z = 12;
    printf("%d\n", x+y+z);
    x = y = z = 4;
    printf("%d\n", x*y*z); // multiple 4 * 4 * 4
    return 0;
}
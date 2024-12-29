#include<stdio.h>

int main(){
    int x = 10;
    int y = 20;
    printf("The value of x before addition  = %d\n", x);
    printf("before addition:  x > y = %d\n", x>y); // return 0 bacuase 10 is less than 20

    x += 15;
    printf("The value of X = %d\n", x);
    printf("after addition:  x > y = %d\n", x>y); // retrun 1 because "x+=15" 25 is greater than 20


    printf("Used logical ! and && Operator %d\n Return false (0), because !(not) is used to reverse the result", !(x >y && x<30) ) ;

}
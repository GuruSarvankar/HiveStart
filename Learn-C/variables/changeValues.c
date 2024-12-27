#include<stdio.h>

int main(){
    int myNum = 15;
    int newNum = 23;
    int sum = myNum + newNum;

    newNum = myNum;

    printf("%d\n", newNum);
    printf("%d", sum);
}
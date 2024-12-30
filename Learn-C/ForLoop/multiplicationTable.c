#include<stdio.h>

int main(){

    int numberTable = 11;
    int i;

    for ( i =1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numberTable, i, numberTable * i);
    }
    
}
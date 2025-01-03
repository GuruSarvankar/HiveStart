#include<stdio.h>

int main(){
    int myNumbers[4]= {25,50,75,95};
    int i;
    for(i =0; i <4 ; i++) {
        printf("%p\n", myNumbers[i]);       // memory address or location
    };
     printf("\n%d Memory address of Array \n", myNumbers);
    // printf("%d\n Memory address of First Array :", myNumbers[0]);
    // printf("%lu", sizeof(myNumbers)); // output 16 bytes, 4 integer values multiply by 4  -- memory size
}
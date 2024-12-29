#include<stdio.h>

int main(){
    int currentTime = 15;
    if(currentTime < 12) {
        printf("Good Morning");
    }
    else if (currentTime >12 && currentTime < 16) {
        printf("Good Afternoon");
    }
    else 
    {
        printf("Good Evening");
    }
    
}
#include<stdio.h>

int main(){
    int maxScore = 500;
    int userScore = 423;

    float userPercentage = (float)userScore / maxScore * 100.0;

    printf("User percentage = %.2f", userPercentage);
}
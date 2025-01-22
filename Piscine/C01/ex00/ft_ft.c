#include<stdio.h> /* remove this before push*/

void ft_ft(int *nbr) {
    *nbr = 42;
}
/* remove below code before push*/
int main(){
    int num = 0;
    printf("Before ft_ft function: %d\n", num);

    ft_ft(&num);
    printf("Before ft_ft function: %d\n", num);
}
#include<stdio.h> /* remove this before push*/

void ft_ultimate_ft(int *********nbr) {
     *********nbr = 42;
}


/* remove below code before push*/
int main(){
    int num = 0;

    int *p1 = &num;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;

    printf("Before ft_ultimate_ft: %d\n", num);

    ft_ultimate_ft(p9);
    printf("Before ft_ultimate_ft: %d\n", num);
}
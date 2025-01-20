#include<unistd.h>

void ft_print_numbers(void) {
    char firstDigit = '1';
    while (firstDigit <='9')
    {
        write(1, &firstDigit, 1);
        firstDigit++;
    }
}

int main(){
    ft_print_numbers();
    return 0;
}
#include<stdio.h>
#include<unistd.h>


void ft_print_alphabets(void) {
    char first_char = 'a';
    while (first_char <= 'z')
    {
        write(1, &first_char, 1);
        first_char++;
    }
}

int main(){
    ft_print_alphabets();
    return 0;
}
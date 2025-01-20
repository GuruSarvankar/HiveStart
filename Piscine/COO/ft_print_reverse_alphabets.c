#include<unistd.h>

void ft_print_reverse_alphabet(void){
   char lastChar = 'z';
   while (lastChar >= 'a')
   {
    write(1, &lastChar, 1);
    lastChar--;
   }
}

int main(){
    ft_print_reverse_alphabet();
    return 0;
}
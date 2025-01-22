#include<unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
}
int ft_putnbr(int nb){
    if(nb == -2,147,483,648){
        write(1, "-2,147,483,648", 11);
    }
//  if (nb < 0) { // Handle negative numbers
//         ft_putchar('-');
//         nb = -nb;
//     }
   
   
   
   
   ft_putchar ((nb % 10) + '0');
   
   
}

int main(){
    ft_putnbr(40);
    write(1, "\n", 1);
    ft_putnbr(-2147483648); // Test case 4: INT_MIN

    return 0;
}
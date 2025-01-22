#include<unistd.h>

void ft_print_comb2(void){

    char first[2];
    char second[2];

    first[0] = '0';
    while (first[0] <= '9')
    {
        first[1]='0';
        while (first[1] <= '9')
        {
            second[0] = first[0];        
            while (second[0] <= '9')
            {
                second[1] = first[1] + 1;
                while (second[1]<='9')
                {
                    write(1, &first[0], 1 );
                    write(1, &first[1], 1 );
                    write(1, "-", 1 );
                    write(1, &second[0], 1);
                    write(1, &second[1], 1);
                    
                    if (!(first[0] == '9' && first[1] == '8' && second[0]=='9' && second[1] == '9'))
                    {
                        write(1, ", ", 2 );
                    }
                    
                    second[1]++;
                }
                second[0]++;
            }
             first[1]++;
        }
        first[0]++;
    }  
}

int main(){
    ft_print_comb2();
    return 0;
}
#include<stdio.h>

int main(){
    int i, j, k;

    for ( i = 0; i < 2; i++) 
    {
        printf("Main Navigation %d\n", i); // execute 2 times

        for (j= 0; j < 2; j++)
        {
            printf("Sub Menu %d\n", j);

            for (k = 0; k < 3; k++)
            {
                printf("Inner Menu %d\n", k);
            }
            
        }
        
    }
    
}
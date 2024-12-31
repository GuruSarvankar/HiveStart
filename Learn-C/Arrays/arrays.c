#include<stdio.h>

int main(){
    int myArray[] = {2,5,8,6,8,5};

    
    printf("%d\n", myArray[1]); // to print a specific index value 

    printf("%d\n", sizeof(myArray));  // int types usually takes 4 bytes so here array 6 values * 4 = 24
   
   int i;
   for ( i = 0; i < 4; i++) // use loop to print array values
   {
    printf("%d\n", myArray[i] );
   }
    

}
#include<stdio.h>

int main() {
    int myArray[] = {22, 25, 30, 15, 10};

    int arrayLength = sizeof(myArray)/ sizeof(myArray[0]); // get lenght of array

    float avg, sum;
    int i;

    for ( i = 0; i < arrayLength; i++)

    {
        //printf("%d\n", i);
         sum += myArray[i];
         printf("%.2f\n", sum);
    }
    
    
    avg = sum/ arrayLength;
    printf("%.2f\n", avg);


    int lowestNumber = myArray[0];
    int j;
    for (j = 0; j < arrayLength; j++)
    {
        if (lowestNumber > myArray[j])
        {
            lowestNumber = myArray[j];
        }
        
        
    }
    printf("lowest number: %f" , lowestNumber);
}




#include<stdio.h>

int main(){
    int matrix[2][3] ={ {2,3,4}, {4,5,6}}; // [2][3] 2 rows and 3 columns of array values

    printf("%d\n", matrix[0][1]);   // [0][1]) =  [0] is first row, [1] is second value

    matrix[0][1] = 9;
    printf("%d\n", matrix[0][1]);  // change the value of array
}
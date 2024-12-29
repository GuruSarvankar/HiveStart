#include<stdio.h>

int main() {
int item = 50;
float costPerItem = 9.99;
float totalCost = item * costPerItem;
char currency = '$';

printf("Number of item = %d\n",item);
printf("Cost per item = %.2f\n" , costPerItem);
printf("Total cost = %.2f", totalCost, currency);

}
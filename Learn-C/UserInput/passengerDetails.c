// Online C compiler to run C program online
#include <stdio.h>

int main() {
char passengerCountry[30];  // Define the character limit, here it is [30]
char passengerFullName[50];

printf("Enter Passenger Country : \n");

scanf("%s", &passengerCountry);   // Input take only a single word



printf("Enter Passenger Name : \n");
fgets(passengerFullName, sizeof(passengerFullName), stdin);

printf("Passenger Coutnry is %s\n passenger name is %s", passengerCountry, passengerFullName);
return 0;
}
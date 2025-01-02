// Online C compiler to run C program online    -  https://www.programiz.com/c-programming/online-compiler/
#include <stdio.h>

int main() {
   int myTicketNo;
   char myGroup;
   
   printf("Type of your number and Char : \n" );
   
   scanf("%d %c", &myTicketNo, &myGroup);
   
   printf("My Ticket number is %d and my boarding group is %c", myTicketNo, myGroup);

    return 0;
}
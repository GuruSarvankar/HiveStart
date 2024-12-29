#include<stdio.h>
#include<string.h>
int main(){
    int day = 0;

    switch (day)
    {
    case 1:
        printf("Today is Monday\n");
        break;
    case 2:
        printf("Today is Tuesday\n");
        break;
    case 3:
        printf("Today is Wednesday\n");
        break;
    case 4:
        printf("Today is Thursday\n");
        break;
    case 5:
        printf("Today is Friday\n");
        break;
    case 6:
        printf("Today is Saturday\n");
        break;
    case 7:
        printf("Today is Sunday\n");
        break;
    default:
        printf("Looking forward to the weekend\n");
        break;
    }

    /* you need to compare the strings using strcmp from the string.h library, 
    as switch statements do not directly support string comparison.  Here's how you can correct your code:*/
    char season[] = "Monsoon";

if (strcmp(season, "Summer")==0)
{
    printf("Hot Summer");
}
else if (strcmp(season, "Monsoon")==0){
    printf("Beautiful Monsoon");
} 
else if (strcmp(season, "Winter")==0){
    printf("Enjoy winter");
} 
else {
    printf("Have a beautiful day!");
}
}
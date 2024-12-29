#include<stdio.h>
#include<time.h>

int main(){
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);   // Get the current time
    localTime = localtime(&currentTime); // convert the current time to the local time

    int hour = localTime->tm_hour;  // extract the hours from local time

    // Determine the appropriate greetings.

    if (hour >=5 && hour <12)
    {
        printf("Good Morning\n");
    }
    else if(hour >=12 && hour <17) {
        printf("Good Afternoon\n");
    }
    else if(hour >=17 && hour <21) {
        printf("Good Evening\n");
    }
    else
    {
        printf("Good Night\n");
    }
    
    // Display the Current time
    printf("Current time : %02d: %02d", hour, localTime->tm_hour);
    return 0;
}
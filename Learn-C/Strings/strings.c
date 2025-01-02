#include<stdio.h>
#include<string.h>

int main(){
    char greetings[] = "Hello World";

    printf("%s\n", greetings);    // string type formater type whole word or sentese
    greetings[11] = 'N';
    printf("%s\n", greetings);    
    printf("%c\n", greetings[0]); // character type formater type single character
    printf("Length is: %d\n", strlen(greetings));
    printf("Size is: %d\n", sizeof(greetings));

    //Concatenate str2 to str1 (result is stored in str1)

    char str1[] ="Hello"; //str1 should be large enough to store the result of the two strings combined (20 in our example).
    char str2[]="World!";
    char str3[]="Hive";
    char str4[] ="Hello";
    // Concatenate str2 to str1
    strcat(str1, str2);
    // Print str1
    printf("%s\n", str1); // Output "Hello World"
    printf("Length of str1 is: %d\n", strlen(str1));

    // // Copy str1 to str2
    strcpy(str2, str1);
    
    printf("%s\n", str2); 

 
}
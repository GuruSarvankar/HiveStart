#include<iostream> // is a header file library
#include<string> // must include additional header file in source code, the <string> library
using namespace std; // means we can use names for object and variables

int main(){
    string myName ="John Doe";
    int myAge = 43;
    cout << "Hello World\n";   //cout pronounce see out. cout is an object used togethr with insertion (<<) to print text.
    cout << "Have a good day!!!\n";  // for newline  use "\n" or "endl"
    cout << "A good day to learn c++" << "Adding text with (<<) operator" << endl;
    cout << "My name is " << myName << "I am " << myAge <<" year old.";
    return 0;
}
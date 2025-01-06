#include<iostream>
#include<string>
using namespace std;

int main(){
    string fName= "John";
    string lName = "Doe";

    string fullName = fName + lName;   // + operator to concanate the variables
    string fullName1 = fName.append(lName);  // can use append() function to concanate the variables
    cout << "Fullname  lenght = " << fullName  <<"\n";
    cout << "Fullname1 lenght = " << fullName1  <<"\n";
    cout << "Fullname1 lenght = " << fullName1.length() <<"\n"; // return length 
    cout << "Fullname1 size = " << fullName1.size(); // return length as well

}
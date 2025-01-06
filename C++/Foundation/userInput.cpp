#include<iostream>
using namespace std;

int main(){

    // calculate sum

    int firstNum, secondNum;
    

    cout << "Type your first number : ";
    cin >> firstNum; // cin is use for input with extraction (>>) operator
    cout << "Type your second number  : ";
    cin >> secondNum;
    int sum = firstNum + secondNum;
    cout << "Sum is = " << sum;

    // user input string multiple words

    string fullName;
    cout << "Type your full name :";
    cin >> fullName; // if you type full name "John Doe", it will print only first word that is John
    getline(cin, fullName); // to print whole sentence use getline as user input
    cout << "Your name is : " << fullName;

}
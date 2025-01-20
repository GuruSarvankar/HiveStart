#include<iostream>
#include<string>
using namespace std;

/***
 *  Pointer is a variable that stores the memory address of another variable. 
***/

int main(){
    string food="pizza"; // a food variable string type
    string *ptr = &food; // pointer stores the memory address of "food"

    cout << "Value of food : " << food << "\n"; //value of food (pizza)
    cout << "Address of food : " << &food << endl;  // memory address of food (0x61fef4)
    cout << "Value of ptr : " << ptr << endl; // memory address of food (0x61fef4)
    cout << "Value of ptr : " << *ptr << endl; // Dereferenced value
}
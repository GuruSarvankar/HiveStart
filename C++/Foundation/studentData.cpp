#include<iostream>
using namespace std;

int main(){
    // student data
    string studentName = "John Doe";
    int studentID = 123;
    int studentAge = 43;
    float totalFee = 4000;
    char finalGrade = 'B';

    cout << "Student Name : " << studentName << "\n";
    cout << "Student ID : " << studentID << "\n";
    cout << "Student Age : " << studentAge << "\n";
    cout << "Total Fee : " << totalFee << "\n";
    cout << "Final Grade : " << finalGrade << "\n\n";

    // Calculate Area
    int length = 10;
    int width = 12;
    int area = length * width;

    cout <<"Area of rectangle is = " << area;

    return 0;
}
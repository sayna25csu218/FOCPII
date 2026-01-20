#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, average;

    cout << "Enter marks of first student: ";
    cin >> marks1;

    cout << "Enter marks of second student: ";
    cin >> marks2;

    cout << "Enter marks of third student: ";
    cin >> marks3;

    average = (marks1 + marks2 + marks3) / 3;

    cout << "Average marks of the class: " << average << endl;

    return 0;
}

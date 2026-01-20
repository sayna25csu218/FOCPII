#include <iostream>
using namespace std;

int main() {
    int n;
    float basicSalary, bonus, netSalary;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basicSalary;

        bonus = basicSalary * 0.12;   // 12% bonus
        netSalary = basicSalary + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    return 0;
}


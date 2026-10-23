/* 
LUMUMBA MERCYLINE AFWANDE 
CT101/G/28529/25
A C++ program to automate calculation of employees bonus using for loop
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    // Using a for loop to input and process details for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "\n--- Employee " << i << " ---" << endl;
        cout << "Enter employee name: ";
        cin >> ws; // clear input buffer
        getline(cin, name);
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculations
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display report
        cout << "\n--- Employee Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus (5%): " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}

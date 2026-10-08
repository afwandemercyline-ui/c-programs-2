/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to implement payroll system using functions 
*/

#include <iostream>
#include <string>
using namespace std;

// Global variables
string employeeName;
double basicSalary;
double overtimeHours;
double ratePerHour;
double overtimePay;
double netSalary;

// Function to get employee details
void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

// Function to calculate overtime pay
void calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
}

// Function to calculate net salary
void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

// Function to display payslip
void displayPayslip() {
    cout << "\n========== PAYSLIP ==========\n";
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Net Salary: " << netSalary << endl;
    cout << "=============================\n";
}

int main() {

    getEmployeeDetails();

    calculateOvertimePay();

    calculateNetSalary();

    displayPayslip();

    return 0;
}
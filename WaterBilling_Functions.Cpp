/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to implement a water bolling system using functions 
*/

#include <iostream>
#include <string>
using namespace std;

// Global variables
string customerName;
double unitsConsumed;
double ratePerUnit;
double totalBill;
double discount;
double finalAmount;

// Function to get customer details
void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

// Function to calculate bill
void calculateBill() {
    totalBill = unitsConsumed * ratePerUnit;
}

// Function to apply discount
void applyDiscount() {

    if (unitsConsumed > 100) {
        discount = totalBill * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = totalBill - discount;
}

// Function to display bill
void displayBill() {
    cout << "\n========== WATER BILL ==========\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: " << ratePerUnit << endl;
    cout << "Total Bill: " << totalBill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;
    cout << "===============================\n";
}

int main() {

    getCustomerDetails();

    calculateBill();

    applyDiscount();

    displayBill();

    return 0;
}